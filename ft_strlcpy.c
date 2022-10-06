/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:35:39 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 11:49:19 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
		++i;
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
