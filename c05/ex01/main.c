#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	printf("5! = %d\n",ft_recursive_factorial(5));
	printf("-5! = %d\n",ft_recursive_factorial(-5));
	printf("0! = %d\n",ft_recursive_factorial(0));
	return (0);
}
