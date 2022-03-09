/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:42:19 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:30:34 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Followed by a string of printable characters (0x20 through 0x7E)
// source: https://en.wikipedia.org/wiki/C0_and_C1_control_codes
// Meaning: between space (' ') and '~'
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
