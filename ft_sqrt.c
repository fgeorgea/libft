/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:54:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/03 19:58:01 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (result <= nb && i <= 46340)
	{
		i++;
		result = i * i;
	}
	if (((i - 1) * (i - 1)) != nb)
		return (0);
	return (i - 1);
}
