/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:15:40 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:33:25 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	test1[] = "abcd";
	char	test0[] = "AB123";
	char	empty[] = "";

	printf("%s ------> ", test1);
	printf("%s\n", ft_strlowcase(test1));
	printf("%s ------> ", test0);
	printf("%s\n", ft_strlowcase(test0));
	printf("%s ------> ", empty);
	printf("%s\n", ft_strlowcase(empty));
	return (0);
}
