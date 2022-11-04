/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@sutdent.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:43:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/21 23:24:14 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long int n, int *is_neg)
{
	size_t	len;

	*is_neg = 0;
	len = 1;
	if (n < 0)
	{
		*is_neg = 1;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len + *is_neg);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			len;
	int			is_neg;
	char		*str;

	nb = n;
	len = ft_intlen(nb, &is_neg);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nb < 0)
		nb *= -1;
	while (len >= 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
		--len;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
