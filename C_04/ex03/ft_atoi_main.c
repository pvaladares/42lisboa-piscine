/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:46:45 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/27 17:59:30 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char	str1[] = "\f\n\r\t\v123";
	char	str2[] = "123hi5";
	char	str3[] = "++++42";
	char	str4[] = "-++-42";
	char	str5[] = " ---01";
	char	str6[] = "-  123";
	char	str7[] = "";
	//char	c;
	printf("str: %s | ft_atoi: %d | atoi: %d\n", str1, ft_atoi(str1), atoi(str1));
	printf("str: %s | ft_atoi: %d | atoi: %d\n", str2, ft_atoi(str2), atoi(str2));
	printf("str: %s | ft_atoi: %d | atoi: %d\n", str3, ft_atoi(str3), atoi(str3));
	printf("str: %s | ft_atoi: %d | atoi: %d\n", str4, ft_atoi(str4), atoi(str4));
	printf("str: %s | ft_atoi: %d | atoi: %d\n", str5, ft_atoi(str5), atoi(str5));
	printf("str: %s | ft_atoi: %d | atoi: %d\n", str6, ft_atoi(str6), atoi(str6));
	printf("str: %s | ft_atoi: %d | atoi: %d\n", str7, ft_atoi(str7), atoi(str7));
	/*
	puts("Printing ascii table of isspace");
	c = '\t';
	printf("Tab      : %d %c\n", c, c);
	c = '\n';
	printf("New line : %d %c\n", c, c);
	c = '\v';
	printf("Vertical : %d %c\n", c, c);
	c = '\f';
	printf("f        : %d %c\n", c, c);
	c = '\r';
	printf("r        : %d %c\n", c, c);
	c = ' ';
	printf("space    : %d %c\n", c, c);
	*/
}
