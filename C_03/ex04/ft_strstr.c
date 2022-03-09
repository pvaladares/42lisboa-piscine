/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:23:33 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 16:22:36 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SYNOPSIS
// #include <string.h>
//
// char *strstr(const char *haystack, const char *needle);
//
// #include <string.h>
// #include <xlocale.h>
//
// DESCRIPTION
// The strstr() function locates the first occurrence of the null-terminated
// string needle in the null-terminated string haystack.
//
// RETURN VALUES
// If needle is an empty string, haystack is returned; if needle occurs
// nowhere in haystack, NULL is returned; otherwise a pointer to the first
// character of the first occurrence of needle is returned
//
// EXAMPLES
//
// The following sets the pointer ptr to the "Bar Baz" portion of largestring:
//
//		const char *largestring = "Foo Bar Baz";
//		const char *smallstring = "Bar";
//		char *ptr;
//
//		ptr = strstr(largestring, smallstring);
//
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
