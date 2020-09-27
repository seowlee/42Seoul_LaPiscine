#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char arr[50] = "abcdefgqwertyuio";
	char arr2[50] = "hjkl";

	printf("arr2 : %s\n", arr2);
	ft_strncpy(arr2, arr, 5);
	printf("arr2 : %s\n", arr2);
}
