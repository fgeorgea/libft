/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 04:24:26 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 04:33:13 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_array_free(char **array, int pos)
{
	int	i;

	if (!array || !*array)
		return (NULL);
	i = 0;
	if (pos != -1)
	{
		while (i < pos)
		{
			free(array[i]);
			i++;
		}
	}
	else
	{
		while (array[i])
		{
			free(array[i]);
			i++;
		}
	}
	free(array);
	return (NULL);
}
