/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:35:39 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/03 18:50:34 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	j = 0;
	if (i + 1 < dstsize)
	{
		j = -1;
		while (++j < i + 1)
		{
			dst[j] = src[j];
		}
	}
	else if (dstsize)
	{
		j = -1;
		while (++j < dstsize - 1)
		{
			dst[j] = src[j];
		}
		dst[j] = '\0';
	}
	return (i);
}
/*
int	main(void)
{
	char	src[] = "felixxxx";
	char	src2[] = "felixxxx";
	char	dest[0];
	char	dest2[0];

	printf("Vanilla: %lu\n", strlcpy(dest, src, 0));
	printf("Vanilla dst: %s\nVanilla src: %s\n", dest, src);
	printf("My result: %zu\n", ft_strlcpy(dest2, src2, 0));
	printf("My dst: %s\nMy src: %s\n", dest2, src2);
}
*/
