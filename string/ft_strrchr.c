/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:06 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 20:06:48 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_c;

	if (!str)
		return (NULL);
	last_c = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_c = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return ((char *)last_c);
}
