/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:49:52 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/03 11:52:55 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//  1, 3  => 1, 2
// -1,  2 => -1, 0, 1
//  0,  0 => null
//  0, -3 => 0, -1, -2
int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;
	int	size;

	if (min >= max)
		return (NULL);
	else
	{
		size = max - min;
		ptr = (int *)malloc(sizeof(int) * size);
		if (ptr == NULL)
			return (NULL);
		i = 0;
		while (i < size)
		{
			ptr[i] = min + i;
			i++;
		}
		return (ptr);
	}
}
