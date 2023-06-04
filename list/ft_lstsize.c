/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:02:49 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/04 02:35:53 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(void *list)
{
	size_t		i;
	t_generic	*lst;

	if (!lst)
		return (0);
	i = 0;
	lst = list;
	while (lst)
	{
		++i;
		lst = lst->next;
	}
	return (i);
}
