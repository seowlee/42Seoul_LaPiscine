/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 02:33:30 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/18 17:00:51 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_print_size(int size)
{
	char c;

	if (size < 0)
	{
		write(1, "-", 1);
		size *= -1;
	}
	if (size >= 10)
	{
		ft_print_size(size / 10);
		ft_print_size(size % 10);
	}
	else
	{
		c = size + '0';
		write(1, &c, 1);
	}
}

void	ft_print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_print_str(par[i].str);
		write(1, "\n", 1);
		ft_print_size(par[i].size);
		write(1, "\n", 1);
		ft_print_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
