/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:07:38 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 18:49:31 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function returns the length of a string
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
// 1. Base is empty or size of 1 (len <= 1)
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

// Function returns the int version of str corresponding to the base provided
// Returns -1 if the char is not found within the base
int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb])
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

// This functions converts a str given in a specific base to int representation
// Notes:
// It will ignore any white space (and other chars) till the first digit
// Whenever - sign is detected it will invert the signal
// Function will stop processing if anything than a digit is found after
// the 1st digit
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	if (!isbaseok(base))
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -sign;
	}
	result = 0;
	nb = nb_base(str[i], base);
	while (str[i] && str[i] >= '0' && str[i] <= '9' && nb != -1)
	{
			result = result * ft_strlen(base) + nb;
			i++;
			nb = nb_base(str[i], base);
	}
	return (result * sign);
}
