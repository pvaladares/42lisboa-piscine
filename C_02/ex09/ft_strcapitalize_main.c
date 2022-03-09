/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:52:38 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:34:18 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(int argc, char **argv)
{
	char	test1[] = "abcd";
	char	test0[] = "AB123";
	char	empty[] = "";

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		printf("Input  : %s\n", test1);
		printf("Output : %s\n", ft_strcapitalize(test1));
		printf("Input  : %s\n", test0);
		printf("Output : %s\n", ft_strcapitalize(test0));
		printf("Input  : %s\n", empty);
		printf("Output : %s\n", ft_strcapitalize(empty));
	}
	else
	{
		printf("Input  : %s\n", argv[1]);
		printf("Output : %s\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
