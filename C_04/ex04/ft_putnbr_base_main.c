/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:55:01 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/27 18:46:42 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_base(int nb, char *base);

int	main(void)
{
	/*
	ft_putnbr_base(11686193, "lumberjackon");
	write(1, "\n", 1);
	ft_putnbr_base(6398, "elbaz");
	write(1, "\n", 1);
	ft_putnbr_base(3064304, "njetoa");
	write(1, "\n", 1);
	write(1, "Error testing - There should be nothing below:\n", 47);
	ft_putnbr_base(3064304, "");
	ft_putnbr_base(3064304, "1");
	ft_putnbr_base(3064304, "njetoan");
	ft_putnbr_base(3064304, "njeto-a");
	*/
	//ft_putnbr_base(INT_MAX, "01");
	//printf("%d\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
}
