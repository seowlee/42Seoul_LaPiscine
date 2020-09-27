/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:19:47 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/21 15:34:26 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	whole_num_to_char(int num)
{
	if (num > 0)
	{
		whole_num_to_char(num / 10);
		whole_num_to_char(num % 10);
	}
	else if (num >= 0)
	{
		num += '0';
		write(1, &num, 1);
	}
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
		write(1, "-2147483648", 11);
	else if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		whole_num_to_char(num);
	}
	else
		whole_num_to_char(num);
	write(1, "\n", 1);
}
