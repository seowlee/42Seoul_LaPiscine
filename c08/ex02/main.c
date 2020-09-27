#include "ft_abs.h"
#include <stdio.h>

int		main(void)
{
	printf("%d, abs : %d\n", 0 , ABS(0));
	printf("%d, abs : %d\n", -5 , ABS(-5));
	printf("%d, abs : %d\n", 2147483647 , ABS(2147483647));
	printf("%ld, abs : %ld\n", -2147483648 , ABS(-2147483648));
	printf("%d, abs : %d\n", 1 , ABS(1));
}
