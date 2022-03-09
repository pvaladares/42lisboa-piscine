/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_main.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:30:38 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:46:23 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(int argc, char **argv)
{
	char	test1[] = "Coucou\nntu vas bien ?";
	char	test0[] = "AB123";
	char	empty[] = "";

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		puts("-------------------------------------------------");
		printf("Input  = \n%s", test1);
		puts("-------------------------------------------------");
		printf("Out = \n");
		ft_putstr_non_printable(test1);
		puts("Other tests....");
		printf("test0 = %s\n", test0);
		ft_putstr_non_printable(test0);
		printf("empty = %s\n", empty);
		ft_putstr_non_printable(empty);
	}
	else
	{
		printf("test text = [start]%s[end]\n", argv[1]);
		ft_putstr_non_printable(argv[1]);
	}
	return (0);
}
