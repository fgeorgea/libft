/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 01:22:40 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/26 02:24:07 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	init_v(t_replace *r, const char *s, const char *f, const char *rep)
{
	(*r).find_len = ft_strlen(f);
	(*r).replace_len = ft_strlen(rep);
	(*r).str_len = ft_strlen(s);
	(*r).result_size = (*r).str_len + 1;
	(*r).occurrences = 0;
	(*r).p = s;
}

static void	rep_occur(t_replace *rep_s, const char *find, const char *replace)
{
	while (1)
	{
		(*rep_s).occurrence = ft_strstr((*rep_s).p, find);
		if (!(*rep_s).occurrence)
		{
			ft_strcpy((char *)(*rep_s).q, (char *)(*rep_s).p);
			break ;
		}
		(*rep_s).segment_len = (*rep_s).occurrence - (*rep_s).p;
		ft_strncpy((char *)(*rep_s).q,
			(char *)(*rep_s).p, (*rep_s).segment_len);
		(*rep_s).q += (*rep_s).segment_len;
		ft_strncpy((char *)(*rep_s).q, (char *)replace, (*rep_s).replace_len);
		(*rep_s).q += (*rep_s).replace_len;
		(*rep_s).p = (*rep_s).occurrence + (*rep_s).find_len;
	}
}

char	*str_replace(const char *str, const char *find, const char *replace)
{
	t_replace	rep_s;

	init_v(&rep_s, str, find, replace);
	while (1)
	{
		rep_s.p = ft_strstr(rep_s.p, find);
		if (!rep_s.p)
			break ;
		rep_s.occurrences++;
		rep_s.p += rep_s.find_len;
	}
	rep_s.result_size += rep_s.occurrences
		* (rep_s.replace_len - rep_s.find_len);
	rep_s.result = malloc(sizeof(char) * rep_s.result_size);
	if (!rep_s.result)
		return (NULL);
	rep_s.p = str;
	rep_s.q = rep_s.result;
	rep_occur(&rep_s, find, replace);
	return (rep_s.result);
}
