/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:38:15 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 19:01:37 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	asign_values(char *dst, char *src, size_t len, int is_overlap)
{
	size_t	i;

	if (!is_overlap)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(dst + i) = *(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i >= 0)
		{
			*(dst + i) = *(src + i);
			i--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_cp;
	char	*dst_cp;

	if (!dst || !src)
		return (NULL);
	src_cp = (char *)src;
	dst_cp = (char *)dst;
	if (src < dst)
		asign_values(dst_cp, src_cp, len, 0);
	else
		asign_values(dst_cp, src_cp, len, 1);
	return (dst);
}
