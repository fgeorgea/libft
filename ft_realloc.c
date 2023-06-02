/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:34:40 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/02 18:46:04 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(void *ptr)
{
	size_t	*size_ptr;
	size_t	block_size;

	if (!ptr)
		return (0);
	size_ptr = (size_t *)ptr - 1;
	block_size = *size_ptr - sizeof(size_t);
	return (block_size);
}

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;
	size_t	old_size;
	size_t	copy_size;

	if (!ptr)
		return (malloc(size));
	if (size <= 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(size);
	if (new_ptr)
	{
		old_size = count_size(ptr);
		if (size < old_size)
			copy_size = size;
		else
			copy_size = old_size;
	}
	free(ptr);
	return (new_ptr);
}
