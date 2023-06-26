/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 02:27:12 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/26 02:27:56 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcat(char *dest, char *src)
{
	size_t	i;
	size_t	count;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (dest[i])
		i++;
	count = 0;
	while (src[count])
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
