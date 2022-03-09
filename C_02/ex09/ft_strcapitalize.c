/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:38:28 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 12:34:10 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	flag_capitalize;

	ft_strlowcase(str);
	i = 0;
	flag_capitalize = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag_capitalize)
				str[i] = str[i] - ('z' - 'Z');
			flag_capitalize = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag_capitalize = 0;
		else
			flag_capitalize = 1;
		i++;
	}
	return (str);
}
