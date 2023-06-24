/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:04:04 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/25 00:04:21 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

double	ft_fabs(double nbr);
int		ft_abs(int nbr);
double	ft_ceil(double nbr);
double	ft_floor(double nbr);
int		ft_pow(int nbr, int power);
int		ft_sqrt(int nb);
int		ft_isprime(int nb);
int		ft_factorial(int nb);
size_t	ft_nbrlen(long int nb);
float	ft_rad_to_deg(float radian);
float	ft_deg_to_rad(float degrees);

#endif
