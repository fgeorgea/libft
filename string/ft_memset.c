/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:23:48 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 19:03:06 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	if (!b)
		return (NULL);
	i = 0;
	tmp = (unsigned char *)b;
	while (i < len)
	{
		*(tmp + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
