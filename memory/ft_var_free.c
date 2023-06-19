/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:10:03 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/19 13:31:24 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_var_free(int len, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	if (len <= 0)
		return ;
	va_start(ap, len);
	while (i < len)
	{
		ft_free(va_arg(ap, void **));
		i++;
	}
	va_end(ap);
}
