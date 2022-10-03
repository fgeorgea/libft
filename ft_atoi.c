/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:12:03 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/03 19:37:22 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	ft_atoi(const char *str)
{
	size_t		i;
	int			negative;
	int			count;

	i = 0;
	negative = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
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
	if (i >= 15 && !negative)
		return (-1);
	else if (i >= 21 && negative)
		return (0);
	else if (negative)
		return (-count);
	else
		return (count);
}

int	main(void)
{
	char	str[] = "214748364955555";
	printf("Vanilla: %d\n", atoi(str));
	printf("Mine: %d\n", ft_atoi(str));
}

