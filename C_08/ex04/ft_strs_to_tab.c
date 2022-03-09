/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:20:32 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/01 15:39:19 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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

// Function allocates and copies the passed string to a new addresss and returns
// a pointer to it. If the malloc fails a NULL pointer is returned
char	*ft_strdup(char *src)
{
	char	*str;
	int		size;

	size = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

// Function allocates and copies the parameters passed through argv to memory
// and returns a pointer that array
// If malloc fails to allocate a NULL pointer is returned
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
