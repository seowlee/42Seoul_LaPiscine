#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *strs[10] = {"aa", "bbb", "cc", "d", "eeee"};
	char sep[2] = "+";
	char *result = ft_strjoin(5, strs, sep);	
	printf("%p, %s\n", result, result);

	return (0);
}
