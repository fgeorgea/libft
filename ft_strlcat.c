/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:50:46 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/12 18:35:48 by fgeorgea         ###   ########.fr       */
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
	if (!dst || !src)
		return (0);
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
