/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:55:58 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/20 18:25:53 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src1[] = "123";
	char	src2[] = "123";
	char	dest1[] = "replaceMePlease";
	char	dest2[] = "replaceMePlease";

	printf("Original  strcpy: %s\n", strcpy(dest1, src1));
	printf("Custom ft_strcpy: %s\n", ft_strcpy(dest2, src2));
	return (0);
}
