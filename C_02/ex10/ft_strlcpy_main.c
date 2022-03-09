/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:17:33 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:41:36 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	char	src[] = "123";
	char	dst1[] = "ABCDEFGHIJ";
	char	dst2[] = "ABCDEFGHIJ";

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		puts("");
		printf("src  = %s\n", src);
		printf("dst1 = %s\n", dst1);
		printf("Original  strlcpy(%s, %s, %lu), returns=%lu\n", dst1, src, strlen(dst1),    strlcpy(dst1, src, strlen(dst1)));
		printf("src  = %s\n", src);
		printf("dst1 = %s\n", dst1);
		puts("");
		printf("src  = %s\n", src);
		printf("dst2 = %s\n", dst1);
		printf("Custom ft_strlcpy(%s, %s, %lu), returns=%u\n ", dst2, src, strlen(dst2), ft_strlcpy(dst2, src, strlen(dst2)));
		printf("src  = %s\n", src);
		printf("dst2 = %s\n", dst1);
	}
	else
	{
		puts(argv[1]);
		//printf("%s\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
