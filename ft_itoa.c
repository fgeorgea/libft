/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@sutdent.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:43:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/05 18:20:01 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(long int n)
{
	int	negative;
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

char	*ft_itoa(int n)
{
	int		i;
	long int	nb;
	size_t		len;
	char		*str;
	int		negative;

	nb = n;
	len = ft_intlen(nb);
	negative = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		negative = 1;
		nb *= -1;
	}
	i = len - 1;
	str[i] = '\0';
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
/*
int	main(void)
{
	int	n = -2147483648;
	printf("Int_len: %ld\n", ft_intlen(n));
	printf("Final_str: %s\n", ft_itoa(n));
	
}*/
