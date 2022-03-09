// https://elearning.intra.42.fr/notions/c-piscine-c-01/subnotions/pointer-arithmetic/videos/pointer-arithmetic

#include <unistd.h>

void	ft_putchar(char ptr)
{
	write(1, &ptr, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_putchar(nbr + '0');
}

void	ft_putaddr(int ptr)
{
	ft_putnbr(ptr);
}

int main(void)
{
	int	a;
	int	b;
	int	*ptr;

	a = 3;
	b = 42;
	ptr = &b;
	ft_putaddr(ptr + 1);
	ft_putchar(' ');
	ft_putnbr(*(ptr + 1 ));
	ft_putchar('\n');
	return (0);
}
