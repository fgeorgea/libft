/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:30:26 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/03 18:33:07 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strcspn() function calculates the length of the initial segment of str
// which consists entirely of characters not in reject.

int	ft_strcspn(const char *str, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	if (!str || !reject)
		return (-1);
	while (str[i])
	{
		j = 0;
		while (reject[j] && reject[j] != str[i])
			j++;
		if (reject[j] && reject[j] == str[i])
			break ;
		i++;
	}
	return (i);
}
