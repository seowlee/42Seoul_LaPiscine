#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char str0[20] = "6173891890";
	char str1[5] = "";
	char str2[20] = "24895-388931";
	int a;
	int b;
	int c;

	a = ft_str_is_numeric(str0);
	b = ft_str_is_numeric(str1);
	c = ft_str_is_numeric(str2);
	printf("a = %d, b = %d, c = %d", a,b,c);
}

