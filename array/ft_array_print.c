/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 04:05:34 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 04:07:31 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_array_print(char **array)
{
	size_t	i;

	if (!array || !*array)
		return ;
	i = 0;
	ft_printf(1, "\nPRINT ARRAY\n");
	while (array[i])
	{
		ft_printf(1, "%s\n", array[i]);
		i++;
	}
	ft_printf(1, "END PRINT ARRAY\n");
}
