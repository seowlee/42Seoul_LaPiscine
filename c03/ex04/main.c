#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
//	char s1[30] = "A Garden Diary";
	char s2[30] = "\0";
//	char *ftptr = ft_strstr(s1, "den");
	char *ftptr = ft_strstr(s2, "\0");
	char *ptr = strstr(s2, "\0");
	//printf("ft : %s , st : %s\n", ftptr, ptr);
	printf("ft : %p , st : %p\n", ftptr, ptr);
}

