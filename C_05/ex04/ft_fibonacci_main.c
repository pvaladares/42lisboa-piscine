/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:37:48 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/31 18:50:16 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	n;

	n = -2;
	while (n < 10)
	{
		printf("fibonacci of %d is %d\n", n, ft_fibonacci(n));
		n++;
	}
	n = -3884;
	printf("fibonacci of %d is %d\n", n, ft_fibonacci(n));
	n = 10;
	printf("fibonacci of %d is %d\n", n, ft_fibonacci(n));
	return (0);
}
