#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	test(unsigned int size)
{
	char buffer[19];
	char string[30] = "hello there, Venus";
	unsigned int r;
	r = ft_strlcpy(buffer, string, size);

	printf("Copied '%s' into '%s', length %d\n",
			string,
			buffer,
			r
		  );
}
int		main(void)
{
	test(19);
	test(10);
	test(1);
	test(0);

	return (0);
}
