/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:12:03 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/03 19:17:07 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

const char	*ft_getsign(const char *str, int *is_neg)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*is_neg *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int			is_neg;
	long int	nbr;
	long int	tmp;

	is_neg = 1;
	if (!str)
		return (0);
	is_neg = 1;
	nbr = 0;
	tmp = 0;
	while (ft_isspace(*str))
		str++;
	str = ft_getsign(str, &is_neg);
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - 48;
		if (nbr < tmp && is_neg == 1)
			return (-1);
		if (nbr < tmp && is_neg == -1)
			return (0);
		tmp = nbr;
		str++;
	}
	return ((int)(nbr * is_neg));
}
