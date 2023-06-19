/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:28:44 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/19 13:17:06 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printchar(int fd, char c)
{
	if (write(fd, &c, 1) == -1)
		return (-1);
	else
		return (1);
}

int	ft_printstr(int fd, char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (write(fd, str, len) == -1)
		return (-1);
	return (len);
}

void	ft_printhex(int fd, unsigned int nb, char *base, int *len)
{
	if (nb < 16)
	{
		*len += ft_printchar(fd, base[nb]);
		if (*len == -1)
			return ;
	}
	else
	{
		ft_printhex(fd, nb / 16, base, len);
		ft_printhex(fd, nb % 16, base, len);
	}
}

static void	ft_printhex_ptr(int fd, unsigned long int nb, char *base, int *len)
{
	if (nb < 16)
	{
		*len += ft_printchar(fd, base[nb]);
		if (*len == -1)
			return ;
	}
	else
	{
		ft_printhex_ptr(fd, nb / 16, base, len);
		ft_printhex_ptr(fd, nb % 16, base, len);
	}
}

int	ft_printptr(int fd, unsigned long int nb)
{
	int	len;

	len = ft_printstr(fd, "0x");
	if (len == -1)
		return (-1);
	ft_printhex_ptr(fd, nb, "0123456789abcdef", &len);
	return (len);
}
