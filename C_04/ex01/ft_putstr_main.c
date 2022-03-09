/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:53:11 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 09:54:33 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(argv[1]);
	else
		ft_putstr("Usage: ./%s string\n", argv[0]);
	return (0);
}
