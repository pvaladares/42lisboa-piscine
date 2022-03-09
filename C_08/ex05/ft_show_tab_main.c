/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:33:31 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/01 14:33:32 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_str.h"
#include "../ex04/ft_strs_to_tab.c"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
