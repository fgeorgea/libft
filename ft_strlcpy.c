/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:35:39 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/11 12:46:01 by fgeorgea         ###   ########.fr       */
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
