/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:38:15 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/03 17:58:50 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)src;
	while (i < len)
	{
		*(unsigned char *)(dst + i) = *(temp + i);
		++i;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[] = "hello aldj";
	char	src[] = "felix";

	char	dest2[] = "hello aldj";
	char	src2[] = "felix";

	printf("%s\n", memmove(dest, src, 5));
	printf("%s\n", ft_memmove(dest2, src2, 5));
}
*/
