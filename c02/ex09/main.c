#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char arr1[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char arr2[100] = "kii,qbhh;a<wBtkjgdokmrmr";
	char arr3[100] = "95Go#n~#sw,krm9y8|Et.'wbWh)";
	
	printf("origin : %s\n", arr1);
	ft_strcapitalize(arr1);
	printf("converted : %s\n", arr1);
	printf("origin : %s\n", arr2);
	ft_strcapitalize(arr2);
	printf("converted : %s\n", arr2);
	printf("origin : %s\n", arr3);
	ft_strcapitalize(arr3);
	printf("converted : %s\n", arr3);
}
