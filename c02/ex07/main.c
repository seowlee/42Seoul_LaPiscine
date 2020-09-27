#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str0[20] = "AgeuTGHs";
	char str1[20] = "1235489";
	char str2[20] = "\0";
	char str3[20] = "&#*(@^";

	ft_strupcase(str0);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);

	printf("%s\n", ft_strupcase(str0));
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
}
