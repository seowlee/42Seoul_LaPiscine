#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%d\n", ft_atoi("  1234"));
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi("\f  \n+-+-+1234"));
	printf("%d\n", ft_atoi(" \t\f\v"));
	printf("%d\n", ft_atoi("  -+1234"));
	return (0);
}
