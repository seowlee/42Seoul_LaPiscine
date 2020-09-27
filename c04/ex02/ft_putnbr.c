/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 18:20:31 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/10 19:12:34 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	whole_num_to_char(int nb)
{
	if (nb > 9)
	{
		whole_num_to_char(nb / 10);
		whole_num_to_char(nb % 10);
	}
	else if (nb >= 0)
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		whole_num_to_char(nb);
	}
	else
		whole_num_to_char(nb);
}
