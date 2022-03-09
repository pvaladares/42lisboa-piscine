/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:27:15 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 13:19:59 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SYNOPSIS
// #include <string.h>
//
// int strcmp(const char *s1, const char *s2);
//
// DESCRIPTION
// The strcmp() function lexicographically compares the null-terminated strings
// s1 and s2.
//
// RETURN VALUES
// The strcmp() function returns an integer greater than, equal to, or less than
// 0, according as the string s1 is greater than, equal to, or less than the
// string s2.  The comparison is done using unsigned characters, so that `\200' 
// is greater than `\0'.
//
// This function reproduces the behaviour of the function strcmp
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
