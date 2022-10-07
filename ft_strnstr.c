/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:44:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/07 12:08:12 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	else if (haystack == 0 && len == 0)
		return ((char *)needle);
	while (i < len)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i - j + 1]);
			}
		}
		else
			j = 0;
		i++;
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
