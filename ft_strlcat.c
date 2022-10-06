/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:50:46 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 11:46:55 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;
	
	i = 0;
	j = 0;
	slen = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (dstsize < dlen)
		return (dstsize + slen);
	while (dst[i] && i < dstsize)
		++i;
	while (src[j] && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[j];
		++j;
		++i;
	}
	dst[i] = '\0';
	return (slen + dlen);
}
/*
int	main(void)
{
	char	src[] = "Felix !";
	char	*dst = NULL;
	char	src2[] = "Felix !";
	char	*dst2 = NULL;
	
	printf("Vanilla: \nlen:  %lu\ndest: %s\nsrc: %s\n\n", strlcat(dst, src, 0), dst,  src);
	printf("Result: \nlen:  %zu\ndst: %s\nsrc: %s\n", ft_strlcat(dst2, src2, 0), dst2, src2);
}
*/
