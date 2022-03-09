#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	n;
	int power;

	n = -1038;
	power = -291;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	n = 0;
	power = 0;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	
	n = 117;
	power = 0;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	
	n = 405;
	power = 1;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	
	n = 2;
	power = 2;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	
	n = 5;
	power = 3;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	
	n = 6;
	power = 4;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	
	n = -8;
	power = 5;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	n = -7;
	power = 7;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	n = -6;
	power = 8;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
//
	n = -5;
	power = 9;
	printf("%d ^ %d = %d\n", n, power, ft_iterative_power(n, power));
	return (0);
}
