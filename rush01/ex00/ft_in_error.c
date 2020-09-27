/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:19:18 by mki               #+#    #+#             */
/*   Updated: 2020/08/09 18:29:21 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_in_error_1234(char in[])
{
	int i;

	i = 0;
	while (in[i])
	{
		if (i % 2 == 0)
		{
			if (in[i] != '1' && in[i] != '2' && in[i] != '3' && in[i] != '4')
			{
				write(1, "Error\n", 6);
				return (1);
			}
		}
		else if (i % 2 == 1)
		{
			if (in[i] != ' ')
			{
				write(1, "Error\n", 6);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_in_error(int argc, char in[])
{
	int i;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (in[i])
		i++;
	if (i != 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ft_in_error_1234(in) == 1)
		return (1);
	return (0);
}
