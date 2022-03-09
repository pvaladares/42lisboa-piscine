/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:55:01 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/27 18:46:42 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// Function checks is the base is valid
// Conditions to make it invalid:
// 1. Base is empty or size of 1 ( len <= 1)
// 2. Base contains '+' or '-'
// 3. Base contains the same char twice
int	isbaseok(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

// Special check for MIN_INT = -2147483648 handled
// using local variable type long
void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	nb;

	nb = nbr;
	if (isbaseok(base))
	{
		base_size = ft_strlen(base);
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= base_size)
		{
			ft_putnbr_base(nb / base_size, base);
			ft_putnbr_base(nb % base_size, base);
		}
		else
			write(1, &base[nbr % base_size], 1);
	}
}
