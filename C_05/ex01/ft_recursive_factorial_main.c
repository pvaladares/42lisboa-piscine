/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:59:35 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 10:22:22 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	n;

	n = -2;
	while (n < 12)
	{
		printf("Factorial %d  = %d\n", n, ft_recursive_factorial(n));
		n++;
	}
	n = -65;
	printf("Factorial %d  = %d\n", n, ft_recursive_factorial(n));
	return (0);
}
