/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:44:51 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/04 21:19:26 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_arraydup(char **src)
{
	size_t	i;
	size_t	len;
	char	**array;

	if (!src)
		return (NULL);
	len = ft_arraylen((void **)src);
	array = malloc(sizeof(char **) * (len + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = ft_strdup(src[i]);
		i++;
	}
	array[i] = NULL;
	return (array);
}
