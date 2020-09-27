#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char src[] = "abcde";
	char *src2 = "";
	printf("ft : %s, st : %s\n", ft_strdup(src), strdup(src));
	printf("ft : %s, st : %s\n", ft_strdup(src2), strdup(src2));
	return (0);
}
