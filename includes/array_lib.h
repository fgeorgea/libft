/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_lib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:02:20 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 04:27:01 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_LIB_H
# define ARRAY_LIB_H

size_t	ft_arraylen(void **array);
void	ft_array_rev(void **array);
void	**ft_array_add(void **src, void *new, int pos);
void	**ft_array_del(void **src, int pos);
void	**ft_array_replace(void **src, void *new, int pos);
void	*ft_array_get_value(void **array, int pos);
char	**ft_arraydup(char **src);
void	ft_array_print(char **array);
void	*ft_array_free(char **array, int pos);

#endif
