/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:10:24 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 19:19:47 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_count_char(const char *file)
{
	int		read_ret;
	int		fd;
	int		nbr_char;
	char	buffer[BUFFER_SIZE];

	if (!file)
		return (0);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	nbr_char = 0;
	read_ret = 1;
	while (read_ret > 0)
	{
		read_ret = read(fd, buffer, BUFFER_SIZE);
		if (read_ret == -1)
		{
			close(fd);
			return (0);
		}
		nbr_char += read_ret;		
	}
	close(fd);
	return (nbr_char);
}
