#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	int len;

	len = ft_strlen("hello");
	printf("str len : %d", len);
}

