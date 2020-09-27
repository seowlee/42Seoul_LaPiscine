#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int max = 10;
	int min = -2;
	int *result = ft_range(min, max);
//	int i = 0;
	for(int i = 0; i < max - min; i++)
//	int *cp;
//	cp = result;
//	while(*cp != '\0')
		printf("%d ", result[i]);
	printf("\n");
	return (0);
}
