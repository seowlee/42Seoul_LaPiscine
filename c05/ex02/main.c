#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("nb = 2, power = 5, result = %d\n", ft_iterative_power(2,5));
	printf("nb = 2, power = 0, result = %d\n", ft_iterative_power(2,0));
	printf("nb = -2, power = 5, result = %d\n", ft_iterative_power(-2,5));
	printf("nb = 0, power = 5, result = %d\n", ft_iterative_power(0,5));
	return (0);
}
