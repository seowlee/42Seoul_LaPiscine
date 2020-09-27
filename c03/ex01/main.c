#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("ft : %d st : %d\n", ft_strncmp("abcde", "abedf", 2), strncmp("abcde", "abedf", 2));
	printf("ft : %d st : %d\n", ft_strncmp("123", "123", 3), strncmp("123", "123", 3));
	printf("ft : %d st : %d\n", ft_strncmp("abcde", "abedf", 5), strncmp("abcde", "abedf", 5));
	printf("ft : %d st : %d\n", ft_strncmp("abe", "abedff", 6), strncmp("abe", "abedff", 6));
	printf("ft : %d st : %d\n", ft_strncmp("", "", 1), strncmp("", "", 1));
	printf("ft : %d st : %d\n", ft_strncmp("abcdf", "abbc", 3), strncmp("abcde", "abbc", 3));
	printf("ft : %d st : %d\n", ft_strncmp("12345", "123", 6), strncmp("12345", "123", 6));
}
