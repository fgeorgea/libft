/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:34:14 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/07 16:52:17 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	
	if (count > 16711568 / size)
		return (NULL);
	res = NULL;
	res = malloc(count * size);
	if (!res)
		return (NULL);
	bzero(res, count * size);
	return (res);
}
/*
int	main(void)
{
	printf("Vanilla:   %s\n", calloc(0, 0));
	printf("My result: %s\n", ft_calloc(0, 0));
}
*/
