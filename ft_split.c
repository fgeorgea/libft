/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:35:58 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/11 12:49:15 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == sep))
			str++;
		if (*str)
			count++;
		while (*str && (*str != sep))
			str++;
	}
	return (count);
}

static int	ft_strlen_sep(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] != sep))
		i++;
	return (i);
}

static char	*ft_word(char const *str, char c)
{
	int		i;
	int		len_word;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, c);
	word = malloc((sizeof(char) * (len_word)) + 1);
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_insert_to_tab(char **res, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && (c == *s))
			s++;
		if (*s)
		{
			res[i] = ft_word(s, c);
			if (!res[i])
			{
				while (*res)
					free(res++);
				free(res);
				return (NULL);
			}
			i++;
		}
		while (*s && (c != *s))
			s++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!res)
		return (NULL);
	return (ft_insert_to_tab(res, s, c));
}
