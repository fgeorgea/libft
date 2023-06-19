/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:02:05 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/19 13:33:10 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	remove_index(void **array, void **src, int len, int pos)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (j == pos)
		{
			free(src[j]);
			j = i + 1;
		}
		else
		{
			array[i] = src[j];
			j++;
			i++;
		}
	}
	array[i] = NULL;
	free(src);
}

void	**ft_array_del(void **src, int pos)
{
	int		len;
	void	**array;

	if (!src)
		return (NULL);
	len = ft_arraylen(src) - 1;
	if (pos < 0)
		pos = len + 1;
	array = malloc(sizeof(void **) * (len + 1));
	if (!array)
		return (NULL);
	remove_index(array, src, len, pos);
	return (array);
}
