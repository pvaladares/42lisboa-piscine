/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:45:18 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/03 15:38:13 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Function returns the lenght of a string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// Function mimics strcpy behaviour
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

// Function returns the total length of an array of strings and the separator
int	compute_total_length(int size, char **strs, char *sep)
{
	int	total_chars;
	int	i;

	total_chars = 0;
	i = 0;
	while (i < size)
	{
		total_chars += ft_strlen(strs[i]);
		total_chars += ft_strlen(sep);
		i++;
	}
	total_chars = total_chars - ft_strlen(sep);
	return (total_chars);
}

// This function concatenates all the strings pointed by strs separated by sep
// Size is the number of strings in strs
// If size is 0, it should a freeable empty string
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	char	*ptr;
	int		total_chars;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_chars = compute_total_length(size, strs, sep);
	buffer = (char *)malloc((total_chars + 1) * sizeof(char));
	ptr = buffer;
	if (ptr == NULL)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(buffer, strs[i]);
		buffer = buffer + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(buffer, sep);
			buffer = buffer + ft_strlen(sep);
		}
	}
	*buffer = 0;
	return (ptr);
}
