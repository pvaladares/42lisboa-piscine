/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:01:09 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/26 09:26:33 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function loops in a way to never repeat the same combination with the rules:
// 1st digit < 2nd digit < 3rd digit
// 1st digit: from 0 to 7
// 2nd digit: from 1 to 8
// 3rd digit: from 2 to 9
void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				ft_putchar(digits[0]);
				ft_putchar(digits[1]);
				ft_putchar(digits[2]);
				if (!(digits[0] == '7' && digits[1] == '8' && digits[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}
