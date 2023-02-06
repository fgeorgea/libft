/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:08:53 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/02/06 14:26:43 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_gnl(char *s1, int *check_nl)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	i = -1;
	while (s1[len])
	{
		if (s1[len] == '\n')
		{
			len++;
			break ;
		}
		len++;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (++i < len)
		res[i] = s1[i];
	res[i] = '\0';
	if (len > 0 && res[i - 1] == '\n')
		*check_nl = i - 1;
	return (res);
}

char	*ft_strjoin_gnl(char *s1, char *s2, int *check_nl)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(s1);
		return (NULL);
	}
	i = 0;
	j = -1;
	while (s1[++j])
		str[i++] = s1[j];
	free(s1);
	j = -1;
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	if (len > 0 && str [i - 1] == '\n')
		*check_nl = 0;
	return (str);
}
