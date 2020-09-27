#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str0[20] = "asdfjkltyuirwp";
	char str1[2] = "";
	char str2[20] = "asd\bfghjklP";
	char str3[20] = "adfghjkl;uiop";
	char str4[40] = "167349		adhfue";

	int a,b,c,d,e;
	
	a = ft_str_is_printable(str0);
	b = ft_str_is_printable(str1);
	c = ft_str_is_printable(str2);
	d = ft_str_is_printable(str3);
	e = ft_str_is_printable(str4);

	printf("%s : %d\n", str0, a);
	printf("%s : %d\n", str1, b);
	printf("%s : %d\n", str2, c);
	printf("%s : %d\n", str3, d);
	printf("%s : %d\n", str4, e);
	
	return (0);
}
