/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:25:42 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/25 00:25:08 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_strerror5(int errnum)
{
	if (errnum == 37)
		return ("No locks available");
	else if (errnum == 38)
		return ("Function not implemented");
	else if (errnum == 39)
		return ("Directory not empty");
	else if (errnum == 40)
		return ("Too many levels of symbolic links");
	else if (errnum == 41)
		return ("Unknown error 41");
	else if (errnum == 42)
		return ("No message of desired type");
	else if (errnum == 43)
		return ("Identifier removed");
	else if (errnum == 44)
		return ("Channel number out of range");
	else if (errnum == 45)
		return ("Level 2 not synchronized");
	else if (errnum == 46)
		return ("Level 3 halted");
	else if (errnum == 47)
		return ("Level 3 reset");
	return ("Link number out of range");
}

static char	*ft_strerror4(int errnum)
{
	if (errnum == 25)
		return ("Inappropriate ioctl for device");
	else if (errnum == 26)
		return ("Text file busy");
	else if (errnum == 27)
		return ("File too large");
	else if (errnum == 28)
		return ("No space left on device");
	else if (errnum == 29)
		return ("Illegal seek");
	else if (errnum == 30)
		return ("Read-only file system");
	else if (errnum == 31)
		return ("Too many links");
	else if (errnum == 32)
		return ("Broken pipe");
	else if (errnum == 33)
		return ("Numerical argument out of domain");
	else if (errnum == 34)
		return ("Result too large");
	else if (errnum == 35)
		return ("Resource deadlock avoided");
	return ("File name too long");
}

static char	*ft_strerror3(int errnum)
{
	if (errnum == 13)
		return ("Permission denied");
	else if (errnum == 14)
		return ("Bad address");
	else if (errnum == 15)
		return ("Block device required");
	else if (errnum == 16)
		return ("Device busy");
	else if (errnum == 17)
		return ("File exists");
	else if (errnum == 18)
		return ("Cross-device link");
	else if (errnum == 19)
		return ("Operation not supported by device");
	else if (errnum == 20)
		return ("Not a directory");
	else if (errnum == 21)
		return ("Is a directory");
	else if (errnum == 22)
		return ("Invalid argument");
	else if (errnum == 23)
		return ("Too many open files in system");
	return ("Too many open files");
}

static char	*ft_strerror2(int errnum)
{
	if (errnum == 1)
		return ("Operation not permitted");
	else if (errnum == 2)
		return ("No such file or directory");
	else if (errnum == 3)
		return ("No such process");
	else if (errnum == 4)
		return ("Interrupted system call");
	else if (errnum == 5)
		return ("Input/output error");
	else if (errnum == 6)
		return ("Device not configured");
	else if (errnum == 7)
		return ("Argument list too long");
	else if (errnum == 8)
		return ("Exec format error");
	else if (errnum == 9)
		return ("Bad file descriptor");
	else if (errnum == 10)
		return ("No child processes");
	else if (errnum == 11)
		return ("Resource temporarily unavailable");
	return ("Cannot allocate memory");
}

char	*ft_strerror(int errnum)
{
	if (errnum >= 1 && errnum <= 12)
		return (ft_strerror2(errnum));
	else if (errnum >= 13 && errnum <= 24)
		return (ft_strerror3(errnum));
	else if (errnum >= 25 && errnum <= 36)
		return (ft_strerror4(errnum));
	else if (errnum >= 37 && errnum <= 48)
		return (ft_strerror5(errnum));
	else if (errnum >= 49 && errnum <= 60)
		return (ft_strerror6(errnum));
	else if (errnum >= 61 && errnum <= 72)
		return (ft_strerror7(errnum));
	else if (errnum >= 73 && errnum <= 84)
		return (ft_strerror8(errnum));
	else if (errnum >= 85 && errnum <= 96)
		return (ft_strerror9(errnum));
	else if (errnum >= 97 && errnum <= 108)
		return (ft_strerror10(errnum));
	else if (errnum >= 109 && errnum <= 120)
		return (ft_strerror11(errnum));
	else if (errnum >= 121 && errnum <= 131)
		return (ft_strerror12(errnum));
	return ("Unknown Error");
}
