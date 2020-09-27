#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);

int		main()
{
	int a;
	a = 2;
//	char c;

	ft_ft(&a);
	printf("%d",a);

}
