/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:40 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 10:05:12 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] == str2[i] && i < n)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

/*
int	main(void)
{
	char	*str = "Felix";
	char	*str2 = "Felix";
	printf("%d\n", ft_strncmp(str, str2, 5));
	printf("%d\n", strncmp(str, str2, 5));
}
*/
