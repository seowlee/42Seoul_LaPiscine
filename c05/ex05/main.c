#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	printf("sqrt 25 : %d\n",ft_sqrt(25));
	printf("sqrt 2147483647 : %d\n",ft_sqrt(2147483647));
	printf("sqrt 17 : %d\n",ft_sqrt(17));
	printf("sqrt 9 : %d\n",ft_sqrt(9));
	printf("sqrt 0 : %d\n",ft_sqrt(0));
	printf("sqrt 1 : %d\n",ft_sqrt(1));
}
