/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:23:24 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 17:17:09 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SYNOPSIS
// #include <string.h>
//
// size_t
// strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
//
// DESCRIPTION
// The strlcat() function copies and concatenates strings with the same input 
// parameters and output result as snprintf(3). It is designed to be safer,
// more consistent, and less error prone replacements for the easily misused 
// functions strncpy(3) and strncat(3).
//
// strlcat() takes the full size of the destination buffer and guarantees 
// NUL-ter mination if there is room.  
// Note that room for the NUL should be included in dstsize.
//
// strlcat() appends string src to the end of dst.  
// It will append at most dstsize - strlen(dst) - 1 characters.  
// It will then NUL-terminate, unless dstsize is 0 or the original dst string
// was longer than dstsize (in practice this should not happen as it means that
// either dstsize is incorrect or that dst is not a proper string).
//
//  If the src and dst strings overlap, the behavior is undefined.
//
// RETURN VALUES
// Besides quibbles over the return type (size_t versus int) and signal handler
// safety (snprintf(3) is not entirely safe on some systems), the following two
// are equivalent:
//
//           n = strlcpy(dst, src, len);
//           n = snprintf(dst, len, "%s", src);
//
// Like snprintf(3), the strlcpy() and strlcat() functions return the total
// length of the string they tried to create.  
// For strlcpy() that means the length of src.  
// For strlcat() that means the initial length of dst plus the length of src.
//
// If the return value is >= dstsize, the output string has been truncated.  
// It is the caller's responsibility to handle this.i
//
// EXAMPLES
// The following code fragment illustrates the simple case:
//
//           char *s, *p, buf[BUFSIZ];
//
//           ...
//
//           (void)strlcpy(buf, s, sizeof(buf));
//           (void)strlcat(buf, p, sizeof(buf));
//
// To detect truncation, perhaps while building a pathname, something like
// the following might be used:
//
//           char *dir, *file, pname[MAXPATHLEN];
//
//           ...
//
//           if (strlcpy(pname, dir, sizeof(pname)) >= sizeof(pname))
//                   goto toolong;
//           if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
//                   goto toolong;
//
// Since it is known how many characters were copied the first time, things
// can be sped up a bit by using a copy instead of an append:
//
//       char *dir, *file, pname[MAXPATHLEN];
//       size_t n;
//
//       ...
//
//       n = strlcpy(pname, dir, sizeof(pname));
//       if (n >= sizeof(pname))
//                   goto toolong;
//       if (strlcpy(pname + n, file, sizeof(pname) - n) >= sizeof(pname) - n)
//                   goto toolong;
//
// However, one may question the validity of such optimizations, as they defeat
//  the whole purpose of strlcpy() and strlcat(). 
//  As a matter of fact, the first version of this manual page got it wrong.
//
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	j = 0;
	while (src[j] && j < size - dest_len - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest_len + src_len);
}
