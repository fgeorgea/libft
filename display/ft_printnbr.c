/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:30:55 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/19 13:17:49 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printnbr(int fd, long int nb)
{
	int	len;

	if (nb < 0)
	{
		if (ft_printchar(fd, '-') == -1)
			return (-1);
		ft_printnbr(fd, -nb);
	}
	else if (nb > 9)
	{
		ft_printnbr(fd, nb / 10);
		ft_printnbr(fd, nb % 10);
	}
	else
	{
		if (ft_printchar(fd, nb + 48) == -1)
			return (-1);
	}
	len = ft_nbrlen(nb);
	return (len);
}
