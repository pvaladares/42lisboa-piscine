/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:56:35 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/27 10:02:43 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	n;

	n = 0;
	while (n < 100)
	{
		printf("isprime(%d) = %d\n", n, ft_is_prime(n));
		n++;
	}
	return (0);
}
