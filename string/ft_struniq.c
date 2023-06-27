/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struniq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 02:24:35 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/27 02:45:03 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	was_char(const char *str, char c, size_t pos)
{
	size_t	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	calc_uniq_len(const char *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!was_char(str, str[i], i))
			count++;
		i++;
	}
	return (count);
}

char	*ft_struniq(const char *src)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!src)
		return (NULL);
	i = 0;
	j = 0;
	len = calc_uniq_len(src);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		if (!was_char(src, src[i], i))
		{
			str[j] = src[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
