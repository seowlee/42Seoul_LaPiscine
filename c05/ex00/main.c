#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	printf("nb = 5 , fact = %d\n", ft_iterative_factorial(5));
	printf("nb = -5 , fact = %d\n", ft_iterative_factorial(-5));
	printf("nb = 0 , fact = %d\n", ft_iterative_factorial(0));
}
