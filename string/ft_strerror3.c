/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:18:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/25 00:18:32 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strerror12(int errnum)
{
	if (errnum == 121)
		return ("Remote I/O error");
	else if (errnum == 122)
		return ("Quota exceeded");
	else if (errnum == 123)
		return ("No medium found");
	else if (errnum == 124)
		return ("Wrong medium type");
	else if (errnum == 125)
		return ("Operation canceled");
	else if (errnum == 126)
		return ("Required key not available");
	else if (errnum == 127)
		return ("Key has expired");
	else if (errnum == 128)
		return ("Key has been revoked");
	else if (errnum == 129)
		return ("Key was rejected by service");
	else if (errnum == 130)
		return ("Owner died");
	return ("State not recoverable");
}

char	*ft_strerror11(int errnum)
{
	if (errnum == 109)
		return ("Too many references: cannot splice");
	else if (errnum == 110)
		return ("Connection timed out");
	else if (errnum == 111)
		return ("Connection refused");
	else if (errnum == 112)
		return ("Host is down");
	else if (errnum == 113)
		return ("No route to host");
	else if (errnum == 114)
		return ("Operation already in progress");
	else if (errnum == 115)
		return ("Operation now in progress");
	else if (errnum == 116)
		return ("Stale NFS file handle");
	else if (errnum == 117)
		return ("Structure needs cleaning");
	else if (errnum == 118)
		return ("Not a XENIX named type file");
	else if (errnum == 119)
		return ("No XENIX semaphores available");
	return ("Is a named type file");
}
