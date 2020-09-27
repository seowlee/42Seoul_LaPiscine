#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	printf("%s\n", "Coucou\ntu vas bien ?");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
}
