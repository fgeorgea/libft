/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:35:58 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/05 17:23:41 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int	count_strings(char const *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && check_sep(*str, sep))
			str++;
		if (*str)
			count++;
		while (*str && !check_sep(*str, sep))
			str++;
	}
	return (count);
}

int	ft_strlen_sep(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], sep))
		i++;
	return (i);
}

char	*ft_word(char const *str, char c)
{
	int		i;
	int		len_word;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, c);
	word = (char *)malloc((sizeof(char) * (len_word)) + 1);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_free_all(char **strs)
{
	while (*strs)
		free(*strs++);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	**res;

	i = 0;
	res = NULL;
	res = malloc(sizeof(char *)
			* (count_strings(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && check_sep(*s, c))
			s++;
		if (*s)
		{
			res[i] = ft_word(s, c);
			if (!res)
			{
				ft_free_all(res);
				return (NULL);
			}
			i++;
		}
		while (*s && !check_sep(*s, c))
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
