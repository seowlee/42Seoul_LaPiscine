#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char	str1[30] = "absewp;opsjvn";
	char	str2[30] = "AaBbbCcDdOopqrsS";
	char	str3[5] = "";
	int		a;
	int		b;
	int		c;

	a = ft_str_is_alpha(str1);
	b = ft_str_is_alpha(str2);
	c = ft_str_is_alpha(str3);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
}
