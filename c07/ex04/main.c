#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	char base_from[] = "0123456789";
	char base_to[] = "0123456789abcdef";
//	char nbr[] = "---+--+1234ab567";

	printf("%s\n",ft_convert_base("123", base_from, base_to));
	printf("%s\n",ft_convert_base("-2147483648", base_from, base_to));

	return (0);
}
