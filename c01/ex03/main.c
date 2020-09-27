#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int d;
	int m;

	d = 0;
	m = 0;
	ft_div_mod(11, 5, &d, &m);
	printf("div = %d, mod = %d", d, m);
}
