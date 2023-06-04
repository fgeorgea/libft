/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:28:44 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/21 19:50:20 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_printchar(char c)
{
	return (write(1, &c, 1));
}

size_t	ft_printstr(char *str)
{
	size_t	len;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

void	ft_printhex(unsigned int nb, char *base, size_t *len)
{
	if (nb < 16)
		*len += ft_printchar(base[nb]);
	else
	{
		ft_printhex(nb / 16, base, len);
		ft_printhex(nb % 16, base, len);
	}
}

static void	ft_printhex_ptr(unsigned long int nb, char *base, size_t *len)
{
	if (nb < 16)
		*len += ft_printchar(base[nb]);
	else
	{
		ft_printhex_ptr(nb / 16, base, len);
		ft_printhex_ptr(nb % 16, base, len);
	}
}

size_t	ft_printptr(unsigned long int nb)
{
	size_t	len;

	len = ft_printstr("0x");
	ft_printhex_ptr(nb, "0123456789abcdef", &len);
	return (len);
}
