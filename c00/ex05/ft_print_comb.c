/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 19:28:49 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/03 15:46:51 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char num[5];

	num[0] = '0';
	num[3] = ',';
	num[4] = ' ';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				if (num[0] == '7')
					write(1, num, 3);
				else
					write(1, num, 5);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
