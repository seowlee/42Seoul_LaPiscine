#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 13;
	b = 512;

	printf("a = %d, b = %d", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
}

