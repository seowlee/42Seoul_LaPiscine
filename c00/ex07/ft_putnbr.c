/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:54:42 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/04 11:31:29 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int *num_arr, int num_index)
{
	char c;

	while (num_index > 0)
	{
		c = num_arr[--num_index] + 48;
		write(1, &c, 1);
	}
}

void	putnbr_p(int nb)
{
	int index;
	int num[10];
	int share;
	int rest;

	index = 0;
	while (1)
	{
		share = nb / 10;
		rest = nb % 10;
		num[index++] = rest;
		if (share == 0)
			break ;
		nb = share;
	}
	print_num(num, index);
}

void	ft_putnbr(int nb)
{
	char zero;
	char minus;

	zero = '0';
	minus = '-';
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb > 0)
		putnbr_p(nb);
	else if (nb == 0)
		write(1, &zero, 1);
	else
	{
		write(1, &minus, 1);
		nb *= -1;
		putnbr_p(nb);
	}
}
