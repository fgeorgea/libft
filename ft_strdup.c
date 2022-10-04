/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:07:46 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/04 14:57:14 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;
	int		len;

	i = 0;
	str = NULL;
	len = ft_strlen(s1);
	str = malloc((sizeof(*str) * len) + 1);
	if (str == NULL)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$\n", str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$\n", allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$\n", allocated);
}
*/
