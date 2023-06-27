/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 02:45:38 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/27 02:49:55 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcapitalize(const char *src)
{
	size_t	i;
	char	*str;

	if (!src)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = ft_toupper(src[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
