#include <stdio.h>
#include <stdlib.h>

int ft_any(char **tab, int (*f)(char *));

int have_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	char **tab = (char **)malloc(sizeof(char *) * 5);

	tab[0] = "oh";
	tab[1] = "hh";
	tab[2] = "sw";
	tab[3] = "eae";
	tab[4] = 0;
	printf("%d\n", ft_any(tab, &have_a));
	return (0);
}
