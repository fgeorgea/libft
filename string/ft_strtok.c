/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:03:08 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/23 18:15:42 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtok(char *src, const char *token)
{
	size_t	i;
	char	*str;

	if (!src || !token)
		return (NULL);
	i = 0;
	while (src[i] && !ft_strchr(token, src[i]))
		i++;
	if (!src[i])
		return (ft_strdup(src));
	str = ft_strdup(src);
	if (!str)
		return (NULL);
	src[i] = '\0';
	str[i] = '\0';
	return (str);
}
