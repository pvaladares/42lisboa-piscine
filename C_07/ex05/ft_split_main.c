/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:34:30 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/02 13:42:23 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	int		index;
	char	**split;

	if (argc > 0)
	{
		split = ft_split(argv[1], argv[2]);
		index = 0;
		while (split[index])
		{
			printf("%s\n", split[index]);
			index++;
		}
	}
}
