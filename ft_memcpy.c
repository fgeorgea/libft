/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:54:13 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/10 11:09:00 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		++i;
	}
	return (dst);
}
/*
int    main(void)
{
    char        str1[] = "0123456789";
    char        str2[] = "0123456789";

    memcpy(&str1[4], str1, 5);
    printf("real : %s\n", str1);
    ft_memcpy(&str2[4], str2, 5);
    printf("mine : %s\n", str2);
}
*/
