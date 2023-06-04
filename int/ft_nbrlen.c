/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:13:10 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/21 19:33:11 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_nbrlen(long int nb)
{
	size_t	len;
	int		is_neg;

	is_neg = 0;
	len = 1;
	if (nb < 0)
	{
		is_neg = 1;
		nb *= -1;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len + is_neg);
}
