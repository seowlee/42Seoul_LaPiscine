#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str0[20] = "AgeuTGHs";
	char str1[20] = "1235489";
	char str2[20] = "\0";
	char str3[20] = "&#*(@^";

	ft_strlowcase(str0);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);

	printf("%s\n", str0);
	printf("%s\n", str1);
	printf("%s\n", str3);
	printf("%s", str2);
}
