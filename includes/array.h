/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:02:20 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/25 00:13:47 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

size_t	ft_arraylen(void **array);
void	ft_array_rev(void **array);
void	**ft_array_add(void **src, void *new, int pos);
void	**ft_array_del(void **src, int pos);
void	**ft_array_replace(void **src, void *new, int pos);
void	*ft_array_get_value(void **array, int pos);
char	**ft_arraydup(char **src);

#endif
