/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:43:50 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/10 11:13:14 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) >= len)
		str = malloc(sizeof(char) * (len + 1));
	else
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		str[i] = s[start];
		++i;
		++start;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str[] = "felix est content";
	printf("%s", ft_substr(str, 7, 3));
}
*/
