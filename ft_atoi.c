/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:12:03 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/10 11:12:39 by fgeorgea         ###   ########.fr       */
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
	if ((count > LONG_MAX) && negative == 0)
		return (-1);
	else if ((count - 1 > LONG_MAX) && negative == 1)
		return (0);
	if (negative)
		return (-count);
	return (count);
}

int	ft_atoi(const char *str)
{
	int					negative;
	unsigned long int	count;

	negative = 0;
	count = 0;
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
	return (ft_check_limits(negative, count));
}
/*
int	main(void)
{
	char	str[] = "10";
	printf("Vanilla: %d\n", atoi(str));
	printf("Mine:    %d\n", ft_atoi(str));
}
*/
