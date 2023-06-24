/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:20:35 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 23:36:57 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_perror(const char *message)
{
	if (message)
		ft_printf(2, "%s: %s\n", message, ft_strerror(errno));
	else
		ft_printf(2, "%s\n", ft_strerror(errno));
}
