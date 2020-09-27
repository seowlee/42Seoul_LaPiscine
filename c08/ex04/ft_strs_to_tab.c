/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 01:03:32 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/18 19:25:50 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char				*ft_strdup(char *str)
{
	char	*dup;
	int		len;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dup == (char *)(0))
		return (char *)(0);
	len = 0;
	while (*str)
		dup[len++] = *str++;
	dup[len] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == 0)
		return (t_stock_str *)(0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i] = (t_stock_str){0, 0, 0};
	return (stock);
}
