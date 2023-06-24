/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:25:42 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/24 23:04:27 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_strerror12(int errnum)
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

static char	*ft_strerror11(int errnum)
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

static char	*ft_strerror10(int errnum)
{
	if (errnum == 97)
		return ("Address family not supported by protocol");
	else if (errnum == 98)
		return ("Address already in use");
	else if (errnum == 99)
		return ("Cannot assign requested address");
	else if (errnum == 100)
		return ("Network is down");
	else if (errnum == 101)
		return ("Network is unreachable");
	else if (errnum == 102)
		return ("Network dropped connection on reset");
	else if (errnum == 103)
		return ("Software caused connection abort");
	else if (errnum == 104)
		return ("Connection reset by peer");
	else if (errnum == 105)
		return ("No buffer space available");
	else if (errnum == 106)
		return ("Transport endpoint is already connected");
	else if (errnum == 107)
		return ("Transport endpoint is not connected");
	return ("Cannot send after transport endpoint shutdown");
}

static char	*ft_strerror9(int errnum)
{
	if (errnum == 85)
		return ("Interrupted system call should be restarted");
	else if (errnum == 86)
		return ("Streams pipe error");
	else if (errnum == 87)
		return ("Too many users");
	else if (errnum == 88)
		return ("Socket operation on non-socket");
	else if (errnum == 89)
		return ("Destination address required");
	else if (errnum == 90)
		return ("Message too long");
	else if (errnum == 91)
		return ("Protocol wrong type for socket");
	else if (errnum == 92)
		return ("Protocol not available");
	else if (errnum == 93)
		return ("Protocol not supported");
	else if (errnum == 94)
		return ("Socket type not supported");
	else if (errnum == 95)
		return ("Operation not supported");
	return ("Protocol family not supported");
}

static char	*ft_strerror8(int errnum)
{
	if (errnum == 73)
		return ("RFS specific error");
	else if (errnum == 74)
		return ("Bad message");
	else if (errnum == 75)
		return ("Value too large for defined data type");
	else if (errnum == 76)
		return ("Name not unique on network");
	else if (errnum == 77)
		return ("File descriptor in bad state");
	else if (errnum == 78)
		return ("Remote address changed");
	else if (errnum == 79)
		return ("Can not access a needed shared library");
	else if (errnum == 80)
		return ("Accessing a corrupted shared library");
	else if (errnum == 81)
		return (".lib section in a.out corrupted");
	else if (errnum == 82)
		return ("Attempting to link in too many shared libraries");
	else if (errnum == 83)
		return ("Cannot exec a shared library directly");
	return ("Illegal byte sequence");
}

static char	*ft_strerror7(int errnum)
{
	if (errnum == 61)
		return ("No data available");
	else if (errnum == 62)
		return ("Timer expired");
	else if (errnum == 63)
		return ("Out of streams resources");
	else if (errnum == 64)
		return ("Machine is not on the network");
	else if (errnum == 65)
		return ("Package not installed");
	else if (errnum == 66)
		return ("Object is remote");
	else if (errnum == 67)
		return ("Link has been severed");
	else if (errnum == 68)
		return ("Advertise error");
	else if (errnum == 69)
		return ("Srmount error");
	else if (errnum == 70)
		return ("Communication error on send");
	else if (errnum == 71)
		return ("Protocol error");
	return ("Multihop attempted");
}

static char	*ft_strerror6(int errnum)
{
	if (errnum == 49)
		return ("Protocol driver not attached");
	else if (errnum == 50)
		return ("No CSI structure available");
	else if (errnum == 51)
		return ("Level 2 halted");
	else if (errnum == 52)
		return ("Invalid exchange");
	else if (errnum == 53)
		return ("Invalid request descriptor");
	else if (errnum == 54)
		return ("Exchange full");
	else if (errnum == 55)
		return ("No anode");
	else if (errnum == 56)
		return ("Invalid request code");
	else if (errnum == 57)
		return ("Invalid slot");
	else if (errnum == 58)
		return ("Unknown error 58");
	else if (errnum == 59)
		return ("Bad font file format");
	return ("Device not a stream");
}

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
	return ("Undifined Error: 0");
}
