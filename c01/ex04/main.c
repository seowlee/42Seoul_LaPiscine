#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int share;
	int rest;

	share = 57;
	rest = 6;

	ft_ultimate_div_mod(&share, &rest);

	printf("share = %d, rest = %d", share, rest);
}
