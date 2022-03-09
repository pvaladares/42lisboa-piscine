/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:53:14 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:41:22 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function reproduces the behaviour of the function strlcpy
//
// SYNOPSIS
// #include <string.h>
//
// size_t
// strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
//
// DESCRIPTION
// The strlcpy() function copy strings with the same input parameters and output
// result as snprintf(3). It is designed to be safer, more consistent, and less 
// error prone replacements for the easily misused functions strncpy(3).
//
// strlcpy() takes the full size of the destination buffer and guarantees 
// NUL-termination if there is room.  
// Note that room for the NUL should be included in dstsize.
//
// strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
// NUL-terminating the result if dstsize is not 0.
//
// If the src and dst strings overlap, the behavior is undefined
//
// RETURN VALUES
// Besides quibbles over the return type (size_t versus int) and signal handler
// safety (snprintf(3) is not entirely safe on some systems), the following two
// are equivalent:
//
//         n = strlcpy(dst, src, len);
//         n = snprintf(dst, len, "%s", src);
//
// Like snprintf(3), the strlcpy() function returns the total length of the
// string it tried to create. For strlcpy() that means the length of src.
// 
// If the return value is >= dstsize, the output string has been truncated.  
// It is the caller's responsibility to handle this.
//
// EXAMPLES
// The following code fragment illustrates the simple case:
//
//         char *s, *p, buf[BUFSIZ];
//
//         ...
//
//         (void)strlcpy(buf, s, sizeof(buf));
//
// To detect truncation, perhaps while building a pathname, something like the
// following might be used:
//
//         char *dir, *file, pname[MAXPATHLEN];
//
//         ...
//
//         if (strlcpy(pname, dir, sizeof(pname)) >= sizeof(pname))
//                 goto toolong;
//         if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
//                 goto toolong;
//
// Since it is known how many characters were copied the first time, things can
// be sped up a bit by using a copy instead of an append:
//
//         char *dir, *file, pname[MAXPATHLEN];
//         size_t n;
//
//         ...
//
//         n = strlcpy(pname, dir, sizeof(pname));
//         if (n >= sizeof(pname))
//                 goto toolong;
//         if (strlcpy(pname + n, file, sizeof(pname) - n) >= sizeof(pname) - n)
//                 goto toolong;
//
// However, one may question the validity of such optimizations, as they defeat
// the whole purpose of strlcpy().  As a matter of fact, the first version of
// this manual page got it wrong.
//
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
