/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 02:35:45 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/26 02:50:19 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	calc_len(size_t size, char **strs, size_t sep_len)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += sep_len;
		i++;
	}
	return (len);
}

char	*ft_arrayjoin(char **strs, char *sep)
{
	char	*str;
	size_t	i;
	size_t	len;
	size_t	size;

	if (!strs || !sep)
		return (NULL);
	size = ft_arraylen((void **)strs);
	len = calc_len(size, strs, ft_strlen(sep));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
