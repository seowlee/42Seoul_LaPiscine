#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char str0[20] = "asdfjkltyuirwp";
	char str1[2] = "";
	char str2[20] = "asdfghjklP";
	char str3[20] = "adfghjkl;uiop";

	int a,b,c,d;
	a = ft_str_is_lowercase(str0);
	b = ft_str_is_lowercase(str1);
	c = ft_str_is_lowercase(str2);
	d = ft_str_is_lowercase(str3);

	printf("%s : %d\n", str0, a);
	printf("%s : %d\n", str1, b);
	printf("%s : %d\n", str2, c);
	printf("%s : %d\n", str3, d);
}
