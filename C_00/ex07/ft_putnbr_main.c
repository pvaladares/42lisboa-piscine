/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:29:21 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/31 10:04:46 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// INT_MAX = 2147483647 | INT_MIN = -2147483648
//
#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nbr);
void	ft_putchar(char c);

int	main(void)
{
	int	n;

	printf("INT_MAX = %d | INT_MIN = %d\n", INT_MAX, INT_MIN);
//
	puts("");
	n = 0;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
//
	n = 42;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
//
	n = -42;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
//
	n = INT_MAX;
	printf("%d\n", n);
	ft_putnbr(n);
	printf("\n\n");
//
	n = INT_MIN;	
	printf("\n%d\n", n);
	ft_putnbr(n);
	return (0);
}
