#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		print_next_num(int n)
{
	n += 1;
	return (n);
}

int		main(void)
{
	int tab[] = {1, 3, 5, 7, 9};
	int i;
	int *result = ft_map(tab, 5, &print_next_num);
	
	i = 0;
	while (i < 5)
	{
		printf("%d ", result[i]);
		i++;
	}
	return (0);
}
