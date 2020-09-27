#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int arr[7] = {9,13,-27,103,27,1,2};

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	ft_sort_int_tab(arr,7);

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
}
