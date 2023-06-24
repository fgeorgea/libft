/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:54:13 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 19:02:54 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_cp;
	unsigned char	*dst_cp;

	if (!dst || !src)
		return (NULL);
	i = 0;
	src_cp = (unsigned char *)src;
	dst_cp = (unsigned char *)dst;
	while (i < n)
	{
		*(dst_cp + i) = *(src_cp + i);
		++i;
	}
	return (dst);
}
