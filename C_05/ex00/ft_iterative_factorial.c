/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:50:03 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 10:14:48 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		factorial = 1;
		while (nb > 1)
		{
			factorial = factorial * nb;
			nb = nb - 1;
		}
	}
	return (factorial);
}	
