#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char dest[20] = "hello";
	char dest1[20] = "hello";
	char dest2[20] = "hello";
	char dest3[20] = "hello";
	char src[20] = "world!hahihe";
	unsigned int size = 2;
	unsigned int size2 = 9;

	printf("size = 2, ft :%s,  %u, st : %s, %lu\n", dest, ft_strlcat(dest, src, size),
			dest1, strlcat(dest1, src, size));
	printf("size = 9, ft : %s , %u, st : %s , %lu\n",dest2, ft_strlcat(dest2, src, size2),
		   dest3, strlcat(dest3, src, size2));
}	   
