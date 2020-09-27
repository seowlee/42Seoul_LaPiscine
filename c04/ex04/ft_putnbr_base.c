/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 20:52:25 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/13 11:43:53 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_valid(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_get_length(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_int_to_base(unsigned int nbr, char *base, int len)
{
	if (nbr >= (unsigned int)len)
	{
		ft_int_to_base(nbr / len, base, len);
		ft_int_to_base(nbr % len, base, len);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	unsigned int	number;

	if (ft_is_valid(base) == 0)
		return ;
	len = ft_get_length(base);
	number = 1;
	if (nbr < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	number *= nbr;
	ft_int_to_base(number, base, len);
}
