/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:23:04 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/03 11:53:17 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// $man strdup
//
// SYNOPSIS
// #include <string.h>
//
//     char *strdup(const char *s1);
//
// DESCRIPTION
// The strdup() function allocates sufficient memory for a copy of the
// string s1, does the copy, and returns a pointer to it.  The pointer may
// subsequently be used as an argument to the function free(3).
//
// If insufficient memory is available, NULL is returned and errno is set to
// ENOMEM.
// ============================================================================
// $man malloc
//
// RETURN VALUES
// If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and
// aligned_alloc() functions return a pointer to allocated memory.  If there
// is an error, they return a NULL pointer and set errno to ENOMEM.
// ============================================================================

#include <stdlib.h>
#include <sys/errno.h>

// Function returns the length of string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// Function returns the dest with a copy of the source
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

// Function allocates and copies the passed string to a new addresss and 
// returns a pointer to it. If the malloc fails a NULL pointer is returned
//
// From 'man errno':
//
//	12 ENOMEM Cannot allocate memory.  The new process image required more
//	memory than was allowed by the hardware or by system-imposed memory 
//	management constraints.  A lack of swap space is normally temporary; 
//	however, a lack of core is not.  Soft limits may be increased to their 
// corresponding hard limits.
char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;

	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(dest, src);
	return (dest);
}
