/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:39:35 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 14:23:06 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function reproduces the behaviour of the function strcat
//
// SYNOPSIS
// #include <string.h>
// 
// char *strncat(char *restrict s1, const char *restrict s2, size_t n);
//
// DESCRIPTION
// The strncat() function append a copy of the null-terminated string s2 to the 
// end of the null-terminated string s1, then add a terminating `\0'.  
// The string s1 must have sufficient space to hold the result.
//
// The strncat() function appends not more than n characters from s2, and
// then adds a terminating `\0'.
//
// The source and destination strings should not overlap, as the behavior is
// undefined.
//
// RETURN VALUES
// The strncat() function returns the pointer s1.
//
// SECURITY CONSIDERATIONS
//
// The strcat() function is easily misused in a manner which enables malicious
// users to arbitrarily change a running program's functionality through a
// buffer overflow attack.  (See the FSA.)
//
// Avoid using strcat().  Instead, use strncat() or strlcat() and ensure
// that no more characters are copied to the destination buffer than it can 
// hold.
//
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < nb && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
