/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:10:44 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 13:38:08 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function reproduces the behaviour of the function strcat
//
// SYNOPSIS
// #include <string.h>
//
//  char *strcat(char *restrict s1, const char *restrict s2);
//
// DESCRIPTION
// The strcat() function append a copy of the null-terminated string s2 to the 
// end of the null-terminated string s1, then add a terminating `\0'.  
// The string s1 must have sufficient space to hold the result.
//
// The source and destination strings should not overlap, as the behavior is
// undefined.
//
// RETURN VALUES
// The strcat() function returns the pointer s1.
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
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
