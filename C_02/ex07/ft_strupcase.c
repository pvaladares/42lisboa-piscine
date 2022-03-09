/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:44:30 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:32:07 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function transforms every letter to uppercase
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('z' - 'Z');
		i++;
	}
	return (str);
}
