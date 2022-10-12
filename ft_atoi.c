/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:12:03 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/12 18:38:24 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

static unsigned long int	ft_limits(int neg, unsigned long int count)
{
	if ((count > LONG_MAX) && neg == 0)
		return (-1);
	else if ((count - 1 > LONG_MAX) && neg == 1)
		return (0);
	if (neg)
		return (-count);
	return (count);
}

int	ft_atoi(const char *str)
{
	int					negative;
	unsigned long int	count;

	negative = 0;
	count = 0;
	if (!str)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = !negative;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		count *= 10;
		count += *str - 48;
		str++;
	}
	return (ft_limits(negative, count));
}
