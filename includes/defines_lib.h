/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:01:18 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/25 01:32:43 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_LIB_H
# define DEFINES_LIB_H

# ifdef NULL
#  undef NULL
# endif
# define NULL (void *)0

# ifdef BUFFER_SIZE
#  undef BUFFER_SIZE
# endif
# define BUFFER_SIZE 100

# define PI 3.141592

#endif
