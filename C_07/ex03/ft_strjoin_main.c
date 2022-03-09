/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:46:47 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/03 15:59:49 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int		size;
	int		i;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *) + 1);
	strs[0] = (char *)malloc(sizeof(char) * (3 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (4 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (5 + 1));
	strs[0] = "123";
	strs[1] = "4567";
	strs[2] = "890ab";
	strs[3] = 0;
	sep = "------------------------------------";
	result = ft_strjoin(size, strs, sep);
	i = 0;
	while (i < size)
	{
		printf("strs[%d] = %s\n", i, strs[i]);
		i++;
	}
	printf("Result = |%s|\n", result);
	free(result);
}
