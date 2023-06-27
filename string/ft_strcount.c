/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 02:14:09 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/27 02:23:33 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strcount(const char *str, const char *substr)
{
	size_t	count;
	char	*tmp;

	if (!str || !substr)
		return (0);
	count = 0;
	tmp = (char *)str;
	while (1)
	{
		tmp = ft_strstr(tmp, substr);
		if (!tmp)
			break ;
		tmp++;
		count++;
	}
	return (count);
}
