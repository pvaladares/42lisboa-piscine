/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:16:16 by pvaladar          #+#    #+#             */
/*   Updated: 2022/01/25 13:04:22 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Print a char, n times
void	ft_putchar(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

// Convert a decimal number to hexadecimal, if necessary pad with 0
// Displays a 0-255 number in hex format 0x00
// Insert 0 pad if pad_flag == 1
void	ft_get_hex(unsigned long long nb, int pad_flag)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && pad_flag)
		ft_putchar('0', 1);
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
		ft_putchar(base[nb], 1);
}

// Using cast of address with unsigned long long int 2^64 as max address
// would be 0xFFFFFFFFFFFFFFFF, 64 bits = 8 bytes, each byte 0x00-0xFF
//   1  2  3  4  5  6  7  8
// 0xFF FF FF FF FF FF FF FF
void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	while (i < 16)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp = tmp / 16;
		i++;
	}
	ft_get_hex(addr, 0);
}

// Function displays data in hex format till terminator string '\0'
// Pad is added with spaces after that
void	ft_print_data(unsigned char *addr)
{
	int		i;

	i = -1;
	while (++i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (addr[i])
			ft_get_hex((unsigned long long)addr[i], 1);
		else
			ft_putchar(' ', 2);
	}
	ft_putchar(' ', 1);
	i = -1;
	while (++i < 16)
	{
		if (addr[i])
		{
			if (!(addr[i] >= ' ' && addr[i] <= '~'))
				ft_putchar('.', 1);
			else
				ft_putchar(addr[i], 1);
		}
	}
}

// This function prints memory as shown in exercise in 16 bytes chunks
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_print_addr((unsigned long long)addr + i);
		ft_putchar(':', 1);
		ft_print_data(addr + i);
		ft_putchar('\n', 1);
		i = i + 16;
	}
	return (addr);
}
