/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:15:25 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:33:22 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function transforms every letter to lowercase
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('z' - 'Z');
		i++;
	}
	return (str);
}
