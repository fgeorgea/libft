/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:08:39 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/02/06 14:29:34 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_eol(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (-1);
	while (i < BUFFER_SIZE)
	{
		if (str[i] == '\n' || str[i] == '\0')
			return (i + 1);
		i++;
	}
	return (i);
}

static char	*get_line(char *line, char *tmp, int *check_nl, int fd)
{
	int		byte_read;
	char	buff[BUFFER_SIZE + 1];
	int		size_to_add;

	while (*check_nl == -1)
	{
		ft_bzero(buff, BUFFER_SIZE + 1);
		byte_read = read(fd, buff, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(line);
			ft_bzero(tmp, BUFFER_SIZE + 1);
			return (NULL);
		}
		size_to_add = check_eol(buff);
		ft_strlcpy(tmp, &buff[size_to_add], BUFFER_SIZE + 1);
		ft_strlcpy(buff, buff, size_to_add + 1);
		line = ft_strjoin_gnl(line, buff, check_nl);
		if (byte_read == 0)
		{
			ft_bzero(tmp, BUFFER_SIZE + 1);
			break ;
		}
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	tmp[OPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			check_nl;

	if ((fd < 0 || fd >= OPEN_MAX) || BUFFER_SIZE <= 0)
		return (NULL);
	check_nl = -1;
	line = ft_strdup_gnl(tmp[fd], &check_nl);
	if (!line)
		return (NULL);
	ft_strlcpy(tmp[fd], &tmp[fd][check_nl + 1], BUFFER_SIZE + 1);
	line = get_line(line, tmp[fd], &check_nl, fd);
	if (!line || line[0] == '\0')
	{	
		free(line);
		return (NULL);
	}
	return (line);
}
