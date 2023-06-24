/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_var.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:05:19 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 20:13:59 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_close_var(int size, ...)
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
