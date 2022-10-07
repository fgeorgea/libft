/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:12:03 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/07 11:20:33 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

unsigned long int	ft_check_limits(int negative, unsigned long int count)
{
	if ((count > (unsigned)LONG_MAX) && negative == 0)
		return (-1);
	else if ((count > (unsigned)LONG_MAX) && negative == 1)
		return (0);
	if (negative)
		return (-count);
	return (count);
}

int	ft_atoi(const char *str)
{
	size_t				i;
	int					negative;
	unsigned long int	count;

	i = 0;
	negative = 0;
	count = 0;
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = !negative;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count *= 10;
		count += str[i] - 48;
		++i;
	}
	return (ft_check_limits(negative, count));
}
/*
int	main(void)
{
	char	str[] = "-2147483649999999999999";
	printf("Vanilla: %d\n", atoi(str));
	printf("Mine:    %d\n", ft_atoi(str));
}*/
