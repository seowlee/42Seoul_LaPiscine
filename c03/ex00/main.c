#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("ft : %d, ori : %d\n", ft_strcmp("abc", "abd"), strcmp("abc", "abd"));
	printf("ft : %d, ori : %d\n", ft_strcmp("1234", "123"), strcmp("1234", "123"));
	printf("ft : %d, ori : %d\n", ft_strcmp("abcde", "abcde"), strcmp("abcde", "abcde"));
	printf("ft : %d, ori : %d\n", ft_strcmp("", ""), strcmp("", ""));
}
