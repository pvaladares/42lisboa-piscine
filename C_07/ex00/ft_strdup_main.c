/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:23:31 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/30 16:23:32 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	text[] = "Hello World";
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_strdup(text);
	printf("Using ft_strdup, %p %s\n", ptr1, ptr1);
	ptr2 = strdup(text);
	printf("Using    strdup, %p %s\n", ptr2, ptr2);
}
