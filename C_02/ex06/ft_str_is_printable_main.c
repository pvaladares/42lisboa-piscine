/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:42:31 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/20 15:42:35 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	*test1 = "abcdefghjjilABDELKFSCO?I340990%";
	char	*test0 = "\n";
	char	*empty = "";

	printf("%d %s\n", ft_str_is_printable(test1), test1);
	printf("%d %s\n", ft_str_is_printable(test0), test0);
	printf("%d %s\n", ft_str_is_printable(empty), empty);
	return (0);
}
