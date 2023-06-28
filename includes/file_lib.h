/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 03:49:57 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 04:15:11 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_LIB_H
# define FILE_LIB_H

int		ft_count_lines(int fd);
char	**ft_file_to_array(const char *file, int fd);

#endif