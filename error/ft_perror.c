/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:20:35 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 23:20:36 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	ft_perror(const char *message)
{
	char	*err_mess;

	err_mess = ft_strerror(errno);
	if (message)
	{
		ft_putstr_fd((char *)message, 2);
		ft_putstr_fd(": ", 2);
	}
	ft_putstr_fd(err_mess, 2);
	ft_putstr_fd("\n", 2);
}
