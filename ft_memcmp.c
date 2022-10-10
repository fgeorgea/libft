/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:13:08 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/10 11:12:14 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		--n;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "a";
	char	str2[] = "b";

	printf("Vanilla: %d\n", memcmp(str1, str2, 1));
	printf("Result:  %d\n", ft_memcmp(str1, str2, 1));
}*/
