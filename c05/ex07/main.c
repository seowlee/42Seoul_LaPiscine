#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	printf("Current number 9, next_prime : %d\n", ft_find_next_prime(9));
	printf("Current number 0, next_prime : %d\n", ft_find_next_prime(0));
	printf("Current number 1, next_prime : %d\n", ft_find_next_prime(1));
	printf("Current number 2, next_prime : %d\n", ft_find_next_prime(2));
	printf("Current number -5, next_prime : %d\n", ft_find_next_prime(-5));
	printf("Current number 199, next_prime : %d\n", ft_find_next_prime(199));
	printf("Current number 2147483645, next_prime : %d\n", ft_find_next_prime(2147483645));
}
