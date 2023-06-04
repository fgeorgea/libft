/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 02:46:21 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/04 02:54:32 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrayrev(void **array)
{
	size_t	i;
	size_t	len;
	void	*tmp;

	if (!array || !*array)
		return ;
	i = 0;
	len = ft_arraylen(array);
	while (i < len)
	{
		tmp = array[i];
		array[i] = array[len - 1];
		array[len - 1] = tmp;
		i++;
		len--;
	}
}
