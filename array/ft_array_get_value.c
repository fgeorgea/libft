/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_get_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:52:46 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/19 13:33:33 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_array_get_value(void **array, int pos)
{
	int	len;

	if (!array)
		return (NULL);
	len = ft_arraylen(array);
	if (pos < 0)
		pos = len - 1;
	if (pos >= len)
		return (NULL);
	return (array[pos]);
}
