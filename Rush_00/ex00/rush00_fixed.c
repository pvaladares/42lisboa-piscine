/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:49:20 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/18 15:56:54 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define HEADER_START 'o'
#define HEADER_MIDDLE '-'
#define HEADER_END 'o'
#define BODY '|'
#define FOOTER_START 'o'
#define FOOTER_MIDDLE '-'
#define FOOTER_END 'o'

void	ft_putchar(char c);

// This function prints the header of the rectangle (first line/row).
// It checks the width and displays one of three options:
// i) start char, ii) start char + end char or
// iii) start char + middle chars (depending on width) + end char
// Header ends with a new line.  
void	header(int x)
{
	int	c;

	c = 0;
	if (x == 1)
		ft_putchar(HEADER_START);
	else if (x == 2)
	{
		ft_putchar(HEADER_START);
		ft_putchar(HEADER_END);
	}
	else
	{
		ft_putchar(HEADER_START);
		while (c != x - 2)
		{
			ft_putchar(HEADER_MIDDLE);
			c++;
		}
		ft_putchar(HEADER_END);
	}
	ft_putchar('\n');
}

// This function prints the footer of the rectangle (last line/row).
// Same principle of header()
// It checks the width and displays one of three options:
// i) start char, ii) start char + end char or
// iii) start char + middle chars (depending on width) + end char
// Footer also ends with a new line.
void	footer(int x)
{
	int	c;

	c = 0;
	if (x == 1)
		ft_putchar(FOOTER_START);
	else if (x == 2)
		ft_putchar(FOOTER_END);
	else
	{
		ft_putchar(FOOTER_START);
		while (c != x - 2)
		{
			ft_putchar(FOOTER_MIDDLE);
			c++;
		}
		ft_putchar(FOOTER_END);
	}
	ft_putchar('\n');
}

// This functions prints spaces in the body
void	spaces(int x)
{
	int	c;

	c = 0;
	while (c != x - 2)
	{
		ft_putchar(' ');
		c++;
	}
}

// This function prints the body of the rectangle (middle lines/rows).
// It checks the width and displays one of three options:
// i) start char, ii) start char + end char or
// iii) start char + middle chars (depending on width) + end char
// Body lines also end with a new line.
void	body(int x, int y)
{
	int	l;
	int	lines;

	l = 0;
	lines = y - 2;
	while (l != lines)
	{
		if (x == 1)
			ft_putchar(BODY);
		else
			ft_putchar(BODY);
		if (x >= 3)
			spaces(x);
		if (x >= 2)
			ft_putchar(BODY);
		l++;
		ft_putchar('\n');
	}
}

// No display if any of the arguments is not positive.
// Breakdown of rectangle is done in three parts: header(), body() and footer()
// Displays body() lines if length allows at least one body line to be shown.
// in addition to header() and footer(), to be displayed.
// Displays footer() line if there are at least 2 lines to be displayed.
void	rush(int x, int y)
{
	if (!(x <= 0 || y <= 0))
	{
		header(x);
		if (y >= 3)
			body(x, y);
		if (y >= 2)
			footer(x);
	}
}
