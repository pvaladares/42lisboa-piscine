/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:54:54 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:23:22 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function reproduces the behaviour of the function strcpy
//
// SYNOPSIS
// #include <string.h>
// char *strcpy(char * dst, const char * src);
//
// DESCRIPTION
// The strcpy() function copy the string src to dst (including the terminating 
// `\0' character.)
//
// The source and destination strings should not overlap, as the behavior is 
// undefined.
//
// RETURN VALUES
// The strcpy() function return dst.
// 
// SECURITY CONSIDERATIONS
// The strcpy() function is easily misused in a manner which enables malicious 
// users to arbitrarily change a running program's functionality through a
// buffer overflow attack.
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
