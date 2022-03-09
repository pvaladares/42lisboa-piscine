#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	n;
	int power;

	n = 3915;
	power = -2247;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	n = 0;
	power = 0;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	
	n = -1479;
	power = 0;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	
	n = -3013;
	power = 1;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	
	n = 3;
	power = 2;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	
	n = 4;
	power = 4;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	
	n = 5;
	power = 6;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	
	n = -8;
	power = 7;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	n = -5;
	power = 8;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	n = -4;
	power = 9;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
//
	n = -2;
	power = 10;
	printf("%d ^ %d = %d\n", n, power, ft_recursive_power(n, power));
	return (0);
}
