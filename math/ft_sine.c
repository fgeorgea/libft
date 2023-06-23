/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:55:42 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/22 10:43:42 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

double	ft_sine(double opposite, double hypotenuse, double *angle)
{
	double	sine;

	sine = opposite / hypotenuse;
	if (sine > 1 || sine < -1)
	{
		angle = NULL;
		return (NAN);
	}
	if (angle)
		*angle = asin(sine);
	return (sine);
}