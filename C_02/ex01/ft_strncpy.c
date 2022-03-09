/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:20:07 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:24:20 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function reproduces the behaviour of the function strncpy
//
// SYNOPSIS
// #include <string.h>
// char *strncpy(char * dst, const char * src, size_t len);
//
// DESCRIPTION
// The strncpy() function copy at most len characters from src into dst.  
// If src is less than len characters long, the remainder of dst is filled with
// `\0' characters.  Otherwise, dst is not terminated.
//
// The source and destination strings should not overlap, as the behavior is 
// undefined.
//
// RETURN VALUES
// The strncpy() function return dst.
// 
// EXAMPLES
// The following sets chararray to ``abc\0\0\0'':
//
//          char chararray[6];
//
//          (void)strncpy(chararray, "abc", sizeof(chararray));
//
// The following sets chararray to ``abcdef'':
//
//          char chararray[6];
//
//          (void)strncpy(chararray, "abcdefgh", sizeof(chararray));
//
// Note that it does not NUL terminate chararray because the length of the 
// source string is greater than or equal to the length argument.
//
// The following copies as many characters from input to buf as will fit and NUL
// terminates the result. Because strncpy() does not guarantee to NUL terminate 
// the string itself, this must be done explicitly.
//
//          char buf[1024];
//
//          (void)strncpy(buf, input, sizeof(buf) - 1);
//          buf[sizeof(buf) - 1] = '\0';
//
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
