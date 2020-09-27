#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr(int n)
{
	char c;

	c = n + '0';
	write(1, &c, 1);
}

int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	ft_foreach(tab, 13, *ft_putnbr);
	return (0);
}

