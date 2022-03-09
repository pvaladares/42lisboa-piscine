/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:24:04 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/20 11:41:44 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	*test1 = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char	*test0 = "abcdef-ghiaklasklas";

	printf("%d %s\n", ft_str_is_alpha(test1), test1);
	printf("%d %s\n", ft_str_is_alpha(test0), test0);
	return (0);
}
