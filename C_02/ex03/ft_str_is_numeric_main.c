/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:47:22 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/20 11:50:19 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	char	*test1 = "0123456789";
	char	*test0 = "0123456*789";
	char	*empty = "";

	printf("%d %s\n", ft_str_is_numeric(test1), test1);
	printf("%d %s\n", ft_str_is_numeric(test0), test0);
	printf("%d %s\n", ft_str_is_numeric(empty), empty);
	return (0);
}
