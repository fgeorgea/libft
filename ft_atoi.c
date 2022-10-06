/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:12:03 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 12:36:47 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	int				negative;
	long long int	count;

	i = 0;
	negative = 1;
	count = 0;
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count *= 10;
		count += str[i] - 48;
		++i;
	}
	if (count > LONG_MAX)
		return (-1);
	else if (count < LONG_MIN)
		return (0);
	return (count * negative);
}

int	main(void)
{
	char	str[] = "9223372036854775809";
	printf("Vanilla: %d\n", atoi(str));
	printf("Mine:    %d\n", ft_atoi(str));
}

