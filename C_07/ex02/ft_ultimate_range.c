/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:59:19 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/03 12:10:23 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Test cases:
//  1, 3  => 1, 2
// -1,  2 => -1, 0, 1
//  0,  0 => null
//  0, -3 => 0, -1, -2
// 
// This function allocates and assigns an array of ints
// This int array contains all values between min (included) and max (excluded)
// The size of range to be returned (or -1 on error)
// If the value of min is greater or equal to max value, range points on NULL
// and should return 0.
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	buffer = (int *)malloc(sizeof(int) * size);
	if (buffer == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	return (size);
}
