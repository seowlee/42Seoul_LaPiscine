#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
char	*strcpy_ptr(char *dest, char *src);
int		main(void)
{
	char arr1[100] = "symphony no.6";
//	char tmp1[] = "                               ";
	char arr2[100] = "song";
//	char tmp2[] = "                               ";
	char arr3[100] = "tchaikovsky";
//	char tmp3[] = "                             ";
	char arr4[100] = "swanl";

	printf("%s\n", arr3);
	printf("%s\n", arr4);
	ft_strcpy(arr4, arr3);
	printf("%s\n", arr4);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	ft_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr4);
}
