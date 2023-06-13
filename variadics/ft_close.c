/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:05:19 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/13 17:14:26 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_close(int size, ...)
{
	va_list	ap;
	int		*tmp_fd;

	if (size <= 0)
		return (0);
	va_start(ap, size);
	while (size >= 0)
	{
		tmp_fd = va_arg(ap, int *);
		if (tmp_fd && *tmp_fd >= 0)
		{
			if (close(*tmp_fd) == -1)
				return (size);
			*tmp_fd = -2;
		}
		size--;
	}
	va_end(ap);
	return (0);
}
