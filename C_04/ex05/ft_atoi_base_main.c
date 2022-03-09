/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:59:41 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/26 10:01:39 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*n;
	char	*base;

	n = "	+++++--133742";
	base = "0123456789";
	printf("n = %s | base = %s | output = %d\n", n, base, ft_atoi_base(n, base));
	n = "	     ---101010";
	base = "01";
	printf("n = %s | base = %s | output = %d\n", n, base, ft_atoi_base(n, base));
	n = " 	+---539";
	base = "0123456789abcdef";
	printf("n = %s | base = %s | output = %d\n", n, base, ft_atoi_base(n, base));
	n = "-2147483648";
	base = "0123456789";
	printf("n = %s | base = %s | output = %d\n", n, base, ft_atoi_base(n, base));
	return (0);
}
