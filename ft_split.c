/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:35:58 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/17 10:16:34 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *str, char sep)
{
	size_t	count;

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

static char	*ft_word(char const *str, char c)
{
	int		i;
	int		len_word;
	char	*word;

	len_word = 0;
	i = 0;
	len_word = 0;
	while (str[len_word] && str[len_word] != c)
		len_word++;
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

static char	**ft_insert_to_tab(char **tab, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && (c == *s))
			s++;
		if (*s)
		{
			tab[i] = ft_word(s, c);
			if (!tab[i])
			{
				while (*tab)
					free(tab++);
				free(tab);
				return (NULL);
			}
			i++;
		}
		while (*s && (c != *s))
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	tab = ft_insert_to_tab(tab, s, c);
	return (tab);
}
