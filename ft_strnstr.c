/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:44:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/10 11:12:19 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (!needle[j + 1])
				return ((char *)haystack + i);
			++j;
		}
		++i;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[] = "";
	char	needle[] = "adf";

	printf("Vanilla: %s\n", strnstr(NULL, needle, 10));
	printf("My result: %s\n", ft_strnstr(NULL, needle, 10));
}
*/
