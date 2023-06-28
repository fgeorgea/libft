/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 03:49:57 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 19:32:16 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_LIB_H
# define FILE_LIB_H

int		ft_count_lines(int fd);
char	**ft_file_to_array(const char *file, int fd);
int		ft_count_char(const char *file);
void	ft_cp(const char *file);

#endif
