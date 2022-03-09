/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:50:22 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 10:15:06 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	n;

	n = -2;
	while (n <= 12)
	{
		printf("Factorial %d = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
	return (0);
}
