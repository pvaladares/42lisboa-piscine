/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:48:19 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 13:31:08 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function reproduces the behaviour of the function strncmp
//
// SYNOPSIS
// #include <string.h>
//
// int strncmp(const char *s1, const char *s2, size_t n);
//
// DESCRIPTION
// The strncmp() function lexicographically compares the null-terminated strings
// s1 and s2.
// 
// The strncmp() function compares not more than n characters.  
// Because strncmp() is designed for comparing strings rather than binary data, 
// characters that appear after a `\0' character are not compared.
//
// RETURN VALUES
// The strncmp() function returns an integer greater than, equal to, or less
// than 0, according as the string s1 is greater than, equal to, or less than 
// the string s2.  The comparison is done using unsigned characters, so that 
// `\200' is greater than `\0'.
//
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
