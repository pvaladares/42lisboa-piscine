/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:50:06 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 17:16:21 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

//  1, 3  => 1, 2
// -1,  2 => -1, 0, 1
//  0,  0 => null
//  0, -3 => 0, -1, -2
int	main(void)
{
	int	*tab;
	int	i;
	int	min;
	int	max;
	int	size;

	min = -2;
	max = 18;
	size = max - min;
	tab = ft_range(min, max);
	i = 0;
	printf("size = %d\n", size);
	printf("pointer addr = %p\n", tab);
	while (i < size && tab)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
