/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:27:08 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 11:30:01 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
  
int	ft_find_next_prime(int nb);

int	main(void)
{
	int	n;

	n = -2;
	while (n < 50)
	{
		printf("isprime(%d) = %d\n", n, ft_find_next_prime(n));
		n++;
	}
	return (0);
}
