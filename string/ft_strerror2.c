/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:17:35 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/25 00:19:21 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strerror10(int errnum)
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

char	*ft_strerror9(int errnum)
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

char	*ft_strerror8(int errnum)
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

char	*ft_strerror7(int errnum)
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

char	*ft_strerror6(int errnum)
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
