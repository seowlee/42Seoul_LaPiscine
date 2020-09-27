#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		diff_num(int n1, int n2)
{
	return (n1 - n2);
}

int		main(void)
{
	int length = 6;
	int tab[] = {0, 1, 2, 3, 4, 5};
	int tab1[] = {0, -1, -2, -3, -4, -5};
	int tab2[] = {0, 1, 2, 3, -4, 5};
	int tab3[] = {0, 1, 1, 1, 1, 1};

	printf("%d\n", ft_is_sort(tab, length, &diff_num));
	printf("%d\n", ft_is_sort(tab1, length, &diff_num));
	printf("%d\n", ft_is_sort(tab2, length, &diff_num));
	printf("%d\n", ft_is_sort(tab3, length, &diff_num));
	return (0);
}
