/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:10:22 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/10 00:23:00 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_control_to_hex(unsigned char c)
{
	char first;
	char second;

	first = c / 16;
	second = c % 16;
	write(1, "\\", 1);
	if (first < 10)
		first += 48;
	else
		first += 87;
	if (second < 10)
		second += 48;
	else
		second += 87;
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 31 && str[index] < 127)
			write(1, &str[index], 1);
		else
			print_control_to_hex(str[index]);
		index++;
	}
}
