/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:23:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 19:45:22 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_cp(const char *file)
{
	char	*str;
	char	*new_file;
	int		fd_r;
	int		fd_w;

	if (!file)
		return ;
	fd_r = open(file, O_RDONLY);
	new_file = ft_strjoin(file, ".new");
	ft_printf(1, "%s\n", new_file);
	fd_w = open(new_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	free(new_file);
	if (fd_w == -1 || fd_r == -1)
		return ;
	while (1)
	{
		str = get_next_line(fd_r);
		if (!str)
			break ;
		write(fd_w, str, ft_strlen(str));
		free(str);
	}
	close(fd_r);
	close(fd_w);
}
