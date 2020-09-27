#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	for (int index = -1 ; index < 10 ; index++)
	{
		printf("%d ",ft_fibonacci(index));
	}
	printf("\n");
}	
