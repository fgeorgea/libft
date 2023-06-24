/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:31:32 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 23:33:22 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static void	ft_check_type(int fd, va_list *ap, char type, int *len)
{
	if (type == 'c')
		*len += ft_printchar(fd, va_arg(*ap, int));
	if (type == 's')
		*len += ft_printstr(fd, va_arg(*ap, char *));
	if (type == 'p')
		*len += ft_printptr(fd, va_arg(*ap, unsigned long int));
	if (type == 'd' || type == 'i')
		*len += ft_printnbr(fd, va_arg(*ap, int));
	if (type == 'u')
		*len += ft_printnbr(fd, va_arg(*ap, unsigned int));
	if (type == 'x')
		ft_printhex(fd, va_arg(*ap, unsigned int), "0123456789abcdef", len);
	if (type == 'X')
		ft_printhex(fd, va_arg(*ap, unsigned int), "0123456789ABCDEF", len);
	if (type == '%')
		*len += ft_printchar(fd, '%');
}

int	ft_printf(int fd, const char *str, ...)
{
	int		len;
	int		i;
	va_list	ap;

	if (!str || fd < 0)
		return (-1);
	len = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_check_type(fd, &ap, str[i + 1], &len);
			i++;
		}
		else
			len += ft_printchar(fd, str[i]);
		if (len == -1)
			return (-1);
		i++;
	}
	va_end(ap);
	return (len);
}
