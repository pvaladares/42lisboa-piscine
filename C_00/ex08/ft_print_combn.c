/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:32:32 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/26 09:45:24 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Number patterns:
// The first number of the series = 01234..(n-1)
// The last number  of the series = (9-(n-1))..789 = (10-n)..789
//
// n = 3
// 			   n-1     10-n
// 			   _       _
//			 012, ..., 789
//  		   -       -
//
// n = 9
//        	         n-1     10-n
//        	         _       _
//			 012345678, ..., 123456789
//                   -       -
//
// Prints the current combination if left number < right number 
// to not repeat combinations;
// Loops and check 
// flag_low = 1 = True  = left number is lower than the right one
// flag_low = 0 = False = left number is NOT lower than the right one
//
void	try_to_print_numbers(int *table, int n)
{
	int				i;
	unsigned char	flag_low;

	i = 0;
	flag_low = 1;
	while (i < n - 1)
	{
		if (!(table[i] < table[i + 1]))
			flag_low = 0;
		i++;
	}
	if (flag_low)
	{
		i = 0;
		while (i < n)
		{
			write(1, &"0123456789"[table[i] % 10], 1);
			i++;
		}
		if (table[0] < (10 - n))
			write(1, ", ", 2);
	}
}

// Function prints all combinations of n numbers, as long as n is between 1-9
// Initializes the n table array with zeros, then creates ascending patterns
// and attempt to print them if the rule is applied: 1st < ... < n digit 
void	ft_print_combn(int n)
{
	int		i;
	int		table[10];

	if (n > 0 && n < 10)
	{
		i = 0;
		while (i < n)
			table[i++] = 0;
		while (table[0] <= (10 - n))
		{
			try_to_print_numbers(table, n);
			table[n - 1]++;
			i = n - 1;
			while (i && n > 1)
			{
				if (table[i] > 9)
				{
					table[i - 1]++;
					table[i] = 0;
				}
				i--;
			}
		}
	}
}
