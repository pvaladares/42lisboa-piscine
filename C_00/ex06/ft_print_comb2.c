/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:35:59 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/26 09:27:55 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function loops in a way to never repeat the same combination with the rules:
// 1st number < 2nd number
// 1st number: from 00 to 98
// 2nd number: from 01 to 99
// In order to pad number X to '0X' it is added the result of /% operations
// to add to the ascii code of '0', meaning by default printed char is '0'
//
// Examples: 
//
//	n = 1
//
//	1 / 10 = 0;	0 + '0' = '0';	ft_putchar('0')
//	1 % 10 = 1;	1 + '0' = '1';	ft_putchar('1')
//
//	n = 98
//
// 	98 / 10 = 9;	9 + '0' = '9';	ft_putchar('9')
// 	98 % 10 = 8;	8 + '0' = '8';	ft_putchar('8')
// Explanation on 42 video how /% works to fit a number in base 10
// https://youtu.be/I5UlJXNEKXY?t=89
void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putchar(number1 / 10 + '0');
			ft_putchar(number1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(number2 / 10 + '0');
			ft_putchar(number2 % 10 + '0');
			if (!(number1 == 98 && number2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			number2++;
		}
		number1++;
	}
}
