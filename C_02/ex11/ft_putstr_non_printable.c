/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:15:32 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:46:18 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function displays a string of characters onscreen.
// If it contains characters that are not printable, display in hexadecimal
// lowercase format, preceeded by a '\'. 
// Hexadecimal format is base 16: [0123456789abcdef], max value is 0x7f (del)
// For the case of newline '\n' = 10 = 0x0a
// 		10 / 16 = (int) 0.625 = 0 --> "0123456789abcdef"[0]  = '0'
//		10 % 16 = 10 ---------------> "0123456789abcdef"[10] = 'a'

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[i] / 16], 1);
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		i++;
	}
}
