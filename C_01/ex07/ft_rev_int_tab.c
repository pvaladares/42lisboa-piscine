/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:04:45 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/19 12:31:25 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function reverses a given array of integer
// Loop only goes till half size of the array, since after that it is already
// reversed/mirrored
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
