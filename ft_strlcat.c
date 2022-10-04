/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:50:46 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/04 19:02:11 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	j = 0;
	if ((!dst || !src) && dstsize == 0)
		return (0);
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

int	main(void)
{
	char	src[] = "Felix !";
	char	dst[16] = "Coucou ";
	char	src2[] = "Felix !";
	char	dst2[16] = "Coucou ";
	
	printf("Vanilla len:  %lu\nVanilla dest: %s\nVanilla src: %s\n", strlcat(dst, NULL, 0), dst,  src);
	printf("My len:  %zu\nMy dst: %s\nMy src: %s\n", ft_strlcat(dst2, NULL, 0), dst2, src2);
}

