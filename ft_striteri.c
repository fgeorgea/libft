/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:16:01 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/06 17:32:10 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (*s)
	{
		(*f)(i, &(*s));
		++i;
		s++;
	}
}
/*
void	f(unsigned int i, char *c)
{
	*c += i;
}

int	main(void)
{
	char	str[] = "felix coucou";

	ft_striteri(str, &f);
	printf("%s", str);
}*/
