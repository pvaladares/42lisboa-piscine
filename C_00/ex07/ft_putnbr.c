/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:29:21 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/31 10:03:37 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Functions display the ascii char each of digit of the int number entered
// Some notes:
// Whenever the number is negative, display the '-' and continue as positive
// If number is less than 10, display the digit  by adding to base ASCII '0'
//   Example: 8 => 8
// If number is greather than 10, divide by 10 and recurse again and again
// printing one digit each time
// 	Examples: 19 => ft(putnbr) will print 1
// 					remainder will print 9
// Explanation on 42 video how /% works to fit a number in base 10
// https://youtu.be/I5UlJXNEKXY?t=89
//
// INT_MIN = -2147483648 
// INT_MAX = +2147483647
//
void	ft_putnbr(int nbr)
{
	if (nbr == INT_MIN)
		write(1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -1 * nbr;
		}
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
		else
		{
			ft_putchar(nbr + '0');
		}
	}
}
