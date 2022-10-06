/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:35:58 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 13:50:58 by fgeorgea         ###   ########.fr       */
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
	word = (char *)malloc((sizeof(char) * (len_word)) + 1);
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

static void	ft_free_all(char **strs, int i)
{
	int	j;

	j = 0;
	while (i >= j)
	{
		free(strs[j]);
		++j;
	}
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;

	i = 0;
	res = malloc(sizeof(char *)	* (ft_count_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && (c == *s))
			s++;
		if (*s)
		{
			res[i] = ft_word(s, c);
			if (!res[i])
			{
				ft_free_all(res, i);
				return (NULL);
			}
			i++;
		}
		while (*s && (c != *s))
			s++;
	}
	res[i] = 0;
	return ((char **)res);
}

/*
#include <stdio.h>
int	main(void)
{
	int		index;
	char	**split;
	split = ft_split("Felix est content car il a fini le split", ' ');
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
*/
