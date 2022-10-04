/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:17:40 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/04 19:34:11 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		++i;
	}
	return (0);
}

const char	*ft_set_begin(char const *s1, char const *set)
{
	while (*s1 && ft_check_set(*s1, set))
		s1++;
	return (s1);
}

int	ft_check_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	if (i < 0)
		return (0);
	while ((i > 0) && ft_check_set(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	s1 = ft_set_begin(s1, set);
	end = ft_check_end(s1, set) + 1;
	res = malloc(sizeof(char) * (end + 1));
	if (!res)
		return (NULL);
	while (i < end)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
int    main(void)
{
    char const    str[] = "felix felix coucou felix";
    char const    set[] = "felix";
    printf("%s\n", ft_strtrim(str, set));
}
*/
