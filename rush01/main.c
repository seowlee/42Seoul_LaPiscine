/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:19:39 by mki               #+#    #+#             */
/*   Updated: 2020/08/09 19:49:55 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

extern int g_flag;

void	ft_data(int data[], char input[])
{
	int		i;
	int		even;

	i = 0;
	even = 0;
	while (i < 16)
	{
		data[i] = (int)(input[even] - '0');
		i += 1;
		even += 2;
	}
}

void	init_arr(int arr[][4], int *data)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (data[i] == 1)
		{
			arr[0][i] = 4;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		arr[4][4];
	int		data[16];

	g_flag = 0;
	if (ft_in_error(argc, argv[1]) == 1)
		return (0);
	ft_data(data, argv[1]);
	init_arr(arr, data);
	dfs(1, 4, arr, data);
	if (g_flag == 0)
		write(1, "Error\n", 6);
	return (0);
}
