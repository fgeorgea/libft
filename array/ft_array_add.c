/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 03:03:11 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/19 13:32:48 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	fill_array(void **src, void **array, void *new, int pos)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_arraylen(src) + 1;
	while (i < len)
	{
		if (i == pos)
		{
			array[i] = new;
			j = i;
		}
		else
		{
			array[i] = src[j];
			j++;
		}
		i++;
	}
	array[i] = NULL;
	free(src);
}

void	**ft_array_add(void **src, void *new, int pos)
{
	int		len;
	void	**array;

	if (!src || !new || !*src)
		return (NULL);
	len = ft_arraylen(src) + 1;
	if (pos < 0)
		pos = len - 1;
	array = malloc(sizeof(void **) * (len + 1));
	if (!array)
		return (NULL);
	fill_array(src, array, new, pos);
	return (array);
}
