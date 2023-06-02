/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:45:35 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/02 18:07:08 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *str)
{
	size_t	i;
	size_t	len;
	char	*rstr;
	
	i = 0;
	len = 0;
	if (!str)
		return (NULL);
	while (str[len])
		len++;
	rstr = malloc(sizeof(char) * (len + 1));
	if (!rstr)
		return (NULL);
	while (i < len)
	{
		rstr[i] = str[len - i - 1];
		i++;
	}
	rstr[i] = '\0';
	return (rstr);
}
