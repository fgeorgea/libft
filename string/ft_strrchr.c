/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:06 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 19:44:59 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	if (!str)
		return (NULL);
	last_occurrence = NULL;
	while (*str)
	{
		if (*str == c)
			last_occurrence = str;
		str++;
	}
	if (*str == c)
		return ((char *)str);
	return ((char *)last_occurrence);
}
