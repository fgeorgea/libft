/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:37:41 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/03 20:17:43 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strspn(const char *str, const char *charset)
{
	int	i;

	i = 0;
	if (!str || !charset)
		return (-1);
	while (str[i])
	{
		if (!ft_strchr(charset, str[i]))
			break ;
		i++;
	}
	return (i);
}
