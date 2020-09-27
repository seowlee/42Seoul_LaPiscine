/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 15:49:15 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/04 13:23:47 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *num)
{
	char first[2];
	char second[2];
	char token[2];

	first[0] = num[0] / 10 + 48;
	first[1] = num[0] % 10 + 48;
	second[0] = num[1] / 10 + 48;
	second[1] = num[1] % 10 + 48;
	token[0] = ',';
	token[1] = ' ';
	if (num[0] == 98)
	{
		write(1, first, 2);
		write(1, &token[1], 1);
		write(1, second, 2);
	}
	else
	{
		write(1, first, 2);
		write(1, &token[1], 1);
		write(1, second, 2);
		write(1, token, 2);
	}
}

void	ft_print_comb2(void)
{
	int num[2];

	num[0] = 0;
	while (num[0] <= 98)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			print(num);
			num[1]++;
		}
		num[0]++;
	}
}
