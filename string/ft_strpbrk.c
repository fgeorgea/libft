/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:31:53 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/23 18:40:36 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strpbrk(const char *str, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str || !accept)
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (accept[j])
		{
			if (str[i] == accept[j])
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
