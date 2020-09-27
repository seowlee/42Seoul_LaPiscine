#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str0[20] = "AEWEETTRY";
	char str1[2] = "";
	char str2[20] = "AWEYFFKOYaAtT";
	char str3[20] = "QQEWRT`VVV";

	int a,b,c,d;
	a = ft_str_is_uppercase(str0);
	b = ft_str_is_uppercase(str1);
	c = ft_str_is_uppercase(str2);
	d = ft_str_is_uppercase(str3);

	printf("%s : %d\n", str0, a);
	printf("%s : %d\n", str1, b);
	printf("%s : %d\n", str2, c);
	printf("%s : %d\n", str3, d);
}
