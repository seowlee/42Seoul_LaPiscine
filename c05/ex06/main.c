#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	printf("7 is prime ? %d\n", ft_is_prime(7));	
	printf("-3 is prime ? %d\n", ft_is_prime(-3));	
	printf("0 is prime ? %d\n", ft_is_prime(0));	
	printf("1 is prime ? %d\n", ft_is_prime(1));	
	printf("199 is prime ? %d\n", ft_is_prime(199));
	printf("2 is prime ? %d\n", ft_is_prime(2));
	printf("2147483647 is prime ? %d\n", ft_is_prime(2147483647));
}	

