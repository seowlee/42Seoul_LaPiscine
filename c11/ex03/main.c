#include <stdio.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int length, int (*f)(char *));

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
	int length = 5;
	char **tab = (char **)malloc(sizeof(char *) * (length + 1));

	tab[0] = "oh";
	tab[1] = "haha";
	tab[2] = "sw";
	tab[3] = "eae";
//	tab[4] = 0;
	printf("%d\n", ft_count_if(tab, length, &have_a));
	return (0);
}
