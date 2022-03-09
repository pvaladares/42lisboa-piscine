/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:31:59 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/26 09:37:39 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_combn(int n);

int	main(void)
{
	int	n;

	n = 3;
	printf("Using n = %d\n", n);
	ft_print_combn(n);
	return (0);
}
