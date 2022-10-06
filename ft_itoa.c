/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@sutdent.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:43:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 12:29:24 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long int n)
{
	int		negative;
	size_t	count;

	negative = 0;
	count = 1;
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	while (n > 10)
	{
		n /= 10;
		count++;
	}
	if (negative)
		return (count + 1);
	return (count);
}

static	char	*ft_convert(char *str, long int nb, size_t len)
{
	int	i;
	int	negative;

	i = 0;
	negative = 0;
	if (nb < 0)
	{
		negative = 1;
		nb *= -1;
	}
	i = len - 1;
	str[len] = '\0';
	while (i >= 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		--i;
	}
	if (negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long int	nb;
	size_t		len;
	char		*str;

	nb = n;
	len = ft_intlen(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (ft_convert(str, nb, len));
}
/*
int	main(void)
{
	int	n = 2147483647;
	printf("Int_len: %ld\n", ft_intlen(n));
	printf("Final_str: %s\n", ft_itoa(n));
	
}*/
