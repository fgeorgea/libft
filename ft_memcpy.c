/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:54:13 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/04 11:40:03 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{

	while (n > 0)
	{
		*(unsigned char *)(dst + n - 1) = *(unsigned char *)(src + n - 1);
		n--;
	}
	return (dst);
}
/*
int    main(void)
{
    char        str1[] = "0123456789";
    char        str2[] = "0123456789";
    size_t      n = 5;

    memcpy(&str1[4], str1, n);
    printf("real : %s\n", str1);
    ft_memcpy(&str2[4], str2, n);
    printf("mine : %s\n", str2);
}
*/
