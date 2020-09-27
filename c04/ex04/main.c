#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	char *base = "0123456789ABCDEF";

	for (int i = -5 ; i < 15; i++)
	{
		ft_putnbr_base(i, base);
		printf("\n");
	}
	ft_putnbr_base(-2147483648, base);
	printf("\n");
}
