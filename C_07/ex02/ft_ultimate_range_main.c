/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:08:14 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 17:44:30 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	min = -1;
	max = 17;
	size = ft_ultimate_range(&tab, min, max);
	i = 0;
	printf("Size = %d\n", size);
	printf("ptr address = %p\n", tab);
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}
