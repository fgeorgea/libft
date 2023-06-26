/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:06:32 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/26 02:01:52 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_LIB_H
# define STRUCTS_LIB_H

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
	int				nbr;
}		t_list;

typedef struct s_char
{
	struct s_char	*next;
	char			c;
}		t_char;

typedef struct s_generic
{
	struct s_generic	*next;
}		t_generic;

typedef struct s_replace
{
	size_t		find_len;
	size_t		replace_len;
	size_t		str_len;
	size_t		result_size;
	size_t		occurrences;
	size_t		segment_len;
	const char	*p;
	const char	*q;
	const char	*occurrence;
	char		*result;
}		t_replace;

#endif
