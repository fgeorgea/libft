/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:38:15 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 09:32:23 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	if (!src && !dst)
		return (NULL);
	i = len;
	while (i > 0)
	{
		--i;
		*(char *)(dst + i) = *(char *)(src + i);
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

	printf("Vanilla: %s\n", memmove(&dest[4], src, 5));
	printf("Result: %s\n", ft_memmove(&dest2[4], src2, 5));
	printf("%d", dest > src);
}
*/
