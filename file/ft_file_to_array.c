/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 03:59:29 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/28 04:31:06 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	calc_len_open_file(const char *file, int *fd)
{
	size_t	len;

	len = ft_count_lines(*fd);
	*fd = open(file, O_RDONLY);
	return (len);
}

char	**ft_file_to_array(const char *file, int fd)
{
	size_t	len;
	size_t	i;
	char	**array;
	char	*str;

	if (!file)
		return (NULL);
	len = calc_len_open_file(file, &fd);
	array = malloc(sizeof(char *) * (len + 1));
	if (!array || fd == -1)
		return (NULL);
	i = 0;
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		array[i++] = ft_strdup(str);
		if (!array[i - 1])
			return (ft_array_free(array, i));
		free(str);
	}
	array[i] = NULL;
	close(fd);
	return (array);
}
