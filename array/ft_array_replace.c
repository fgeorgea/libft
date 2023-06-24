/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_replace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:41:17 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 18:17:52 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	replace_index(void **array, void **src, void *new, int pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (i == pos)
		{
			free(src[i]);
			array[i] = new;
		}
		else
			array[i] = src[i];
		i++;
	}
	array[i] = NULL;
	free(src);
}

void	**ft_array_replace(void **src, void *new, int pos)
{
	int		len;
	void	**array;

	if (!src || !new)
		return (NULL);
	len = ft_arraylen(src);
	if (pos < 0)
		pos = len - 1;
	array = malloc(sizeof(void **) * (len + 1));
	if (!array)
		return (NULL);
	replace_index(array, src, new, pos);
	return (array);
}
