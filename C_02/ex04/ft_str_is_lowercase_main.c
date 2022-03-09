/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:56:55 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:28:15 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*test1 = "abcdefghjjil";
	char	*test0 = "abDc";
	char	*empty = "";

	printf("%d %s\n", ft_str_is_lowercase(test1), test1);
	printf("%d %s\n", ft_str_is_lowercase(test0), test0);
	printf("%d %s\n", ft_str_is_lowercase(empty), empty);
	return (0);
}
