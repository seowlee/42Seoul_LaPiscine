#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char *argv[])
{
	int i = 0;
	char str[] = "aa123a1234a4bdeaa234a90";
	char charset[] = "a";
	char str2[] = "RRZWQoNiqNQrHhRxlGW4Q3js9198i1WxYMRX3 mKYEaLiK   OI";
	char charset2[] = "5VNG";

	char **result = ft_split(str, charset);
	printf("str : %s\n", str);
	while (result[i] != '\0')
		printf("%s\n", result[i++]);
	printf("+++++++++++++++++++++++\n");
	argc++;
	argc--;
	i = 0;
	char **result2 = ft_split(argv[1], argv[2]);
	printf("str : %s\n", str2);
	while (result2[i] != '\0')
		printf("*%s\n", result2[i++]);
	printf("+++++++++++++++++++++++\n");
	i = 0;
	char **result3 = ft_split(str2, charset2);
	printf("str : %s\n", str2);
	while (result3[i] != '\0')
		printf("%s\n", result3[i++]);
}
