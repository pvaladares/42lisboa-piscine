/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:45:12 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:32:09 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	test1[] = "abcd";
	char	test0[] = "AB123";
	char	empty[] = "";

	printf("%s ------> ", test1);
	printf("%s\n", ft_strupcase(test1));
	printf("%s ------> ", test0);
	printf("%s\n", ft_strupcase(test0));
	printf("%s ------> ", empty);
	printf("%s\n", ft_strupcase(empty));
	return (0);
}
