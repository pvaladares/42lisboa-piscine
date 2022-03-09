/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:26:54 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 11:29:04 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A prime number (or a prime) is a natural number greater than 1 that is not
// a product of two smaller natural numbers.
// The first 25 prime numbers:
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
// 73, 79, 83, 89, 97
// Source: https://en.wikipedia.org/wiki/Prime_number
//
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
