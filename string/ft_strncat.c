/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 02:28:23 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/26 02:28:51 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (dest[i])
		i++;
	count = 0;
	while (src[count] && count < nb)
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
