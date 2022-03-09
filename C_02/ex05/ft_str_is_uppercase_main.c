/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:59:13 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:29:34 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*test1 = "abcdefghjjil";
	char	*test0 = "ABC";
	char	*empty = "";

	printf("%d %s\n", ft_str_is_uppercase(test1), test1);
	printf("%d %s\n", ft_str_is_uppercase(test0), test0);
	printf("%d %s\n", ft_str_is_uppercase(empty), empty);
	return (0);
}
