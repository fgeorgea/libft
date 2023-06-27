/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 01:07:52 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/27 02:09:59 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	dup_insert(char **new, const char *str, const char *substr, int pos)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while ((int)i < pos)
		(*new)[i++] = str[j++];
	while (substr[k])
		(*new)[i++] = substr[k++];
	while (str[j])
		(*new)[i++] = str[j++];
	(*new)[i] = '\0';
}

char	*ft_strinsert(const char *str, const char *substr, int pos)
{
	int		len_str;
	int		len_substr;
	char	*new;

	if (!str || !substr || pos < 0 || pos > (int)ft_strlen(str))
		return (NULL);
	len_str = ft_strlen(str);
	len_substr = ft_strlen(substr);
	new = malloc(sizeof(char) * ((len_str + len_substr) + 1));
	if (!new)
		return (NULL);
	dup_insert(&new, str, substr, pos);
	return (new);
}
