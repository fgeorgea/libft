/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:56:36 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/13 21:06:11 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

static size_t	ft_count_words(char const *str, char *charset)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !ft_is_sep(*str, charset))
			str++;
	}
	return (count);
}

static char	*ft_word(char const *str, char *charset)
{
	int		i;
	int		len_word;
	char	*word;

	len_word = 0;
	i = 0;
	len_word = 0;
	while (str[len_word] && !ft_is_sep(str[len_word], charset))
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

static char	**ft_insert_to_tab(char **tab, char const *s, char *charset)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && ft_is_sep(*s, charset))
			s++;
		if (*s)
		{
			tab[i] = ft_word(s, charset);
			if (!tab[i])
			{
				while (*tab)
					free(tab++);
				free(tab);
				return (NULL);
			}
			i++;
		}
		while (*s && !ft_is_sep(*s, charset))
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split_charset(char const *s, char *charset)
{
	char	**tab;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, charset);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	tab = ft_insert_to_tab(tab, s, charset);
	return (tab);
}
