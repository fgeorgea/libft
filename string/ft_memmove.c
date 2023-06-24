/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:38:15 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 20:00:58 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr == src_ptr)
		return (dst);
	if (src_ptr < dst_ptr)
	{
		while (len--)
			dst_ptr[len] = src_ptr[len];
	}
	else
	{
		while (len--)
			*dst_ptr++ = *src_ptr++;
	}
	return (dst);
}
