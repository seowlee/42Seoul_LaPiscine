#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[20] = "hello";
	char dest2[20] = "hello";
	char src[10] = "world!";
	printf("%s \n", dest);
	printf("ft : %s\n",ft_strcat(dest,src));
	printf("st : %s\n",strcat(dest2,src));
	return (0);
}
