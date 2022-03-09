/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:49:12 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/26 14:55:32 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

// Max range is from long int
// Long signed integer type. Capable of containing at least the 
// [−2,147,483,648, +2,147,483,647] range.
int	main(void)
{
	ft_putnbr(42);
	puts("");
//
	ft_putnbr(-42);
	puts("");
//
	ft_putnbr(0);
	puts("");
//
	ft_putnbr(+2147483647);
	puts("");
//
	ft_putnbr(INT_MAX);
	puts("");
//
	ft_putnbr(-2147483647);
	puts("");
//
	ft_putnbr(INT_MIN);
	puts("");
//
	ft_putnbr(-2147483648);
	puts("");
	return (0);
}
