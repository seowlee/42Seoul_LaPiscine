#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int n1[6];
	int n2[7];

	n1[0] = 7;
	n2[0] = 3;
	n2[1] = 13;
	n2[2] = 25;
	n2[3] = 100;
	n2[4] = 5;
	n2[5] = 14;
	n2[6] = -2;

	for (int i = 0 ; i < 6; i++)
	{
		n1[i] =7 +  2*i;
	}
	for(int i = 0 ; i <6; i++)
	{
		printf("%d, ",n1[i]);
	}
	printf("\n");
	for(int i = 0 ; i < 7; i++)
	{
		printf("%d, ",n2[i]);
	}
	printf("\n");
	ft_rev_int_tab(n1,6);
	ft_rev_int_tab(n2,7);
	for(int i = 0 ; i <6; i++)
	{
		printf("%d, ", n1[i]);
	}
	printf("\n");
	for(int i = 0; i < 7; i++)
	{
		printf("%d, ", n2[i]);
	}
}
