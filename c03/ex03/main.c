#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[10] = "hello";
	char dest1[10] = "hello";
	char dest2[20] = "hello";
	char dest3[20] = "hello";
	char src[10] = "world!";
	printf("%s \n", dest);
	printf("ft n = 3 : %s\n",ft_strncat(dest,src,3));
	printf("ft n = 10 : %s\n",ft_strncat(dest1,src,10));
	printf("st n = 3 : %s\n",strncat(dest2,src,3));
	printf("st n = 10 : %s\n",strncat(dest3,src,10));
}
