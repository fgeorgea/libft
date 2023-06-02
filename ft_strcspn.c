/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:30:26 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/02 17:44:19 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strcspn() function calculates the length of the initial segment of str
// which consists entirely of characters not in reject.

int	ft_strcspn(const char *str, const char *reject)
{
	int	i;

	i = 0;
	if (!str || !reject)
		return (-1);
	while (str[i])
	{
		if (ft_strchr(reject, str[i]))
			break ;
		i++;
	}
	return (i);
}
