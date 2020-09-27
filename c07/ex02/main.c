#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);
int		main(void)
{
	int *result;
	int range = ft_ultimate_range(&result, -2, 10);
	printf("range : %d\n", range);
	int size = 10 - -2;
	int i = 0;
	while (i < size)
	{
		//	printf("%d ", result[i++]);
		printf("i : %d, range : %d, result = %d\n", i, range, result[i]);
		i++;
	}
	printf("%d", range);
	return (0);
}
