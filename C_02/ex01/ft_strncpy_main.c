/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:20:20 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/24 16:58:01 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
  
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src1[] = "abc";
	char src2[] = "abcdefgh";
	char chararray[6];
// Choose here 1 or 2 the example from man to run
	int example = 2;

	if (example == 2)
	{
		puts("Example # 1 # from man");
		printf("Custom   : %s\n", ft_strncpy(chararray, src1, sizeof(chararray)));
		printf("Original : %s\n", strncpy(chararray, src1, sizeof(chararray)));
	}
	else
	{
		puts("Example # 2 # from man");
		printf("Custom   : %s\n", ft_strncpy(chararray, src2, sizeof(chararray)));
		printf("Original : %s\n", strncpy(chararray, src2, sizeof(chararray)));
	}	
	return (0);
}
