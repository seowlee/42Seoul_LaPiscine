/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dfs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:17:55 by mki               #+#    #+#             */
/*   Updated: 2020/08/09 19:52:25 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	g_flag;

void	dfs(int depth, int n, int arr[][4], int data[])
{
	int i;

	if (g_flag == 1)
		return ;
	if (n == 0)
	{
		finalcheck(arr, data);
		return ;
	}
	i = 0;
	while (i < 4)
	{
		if (arr[depth][i] == 0)
		{
			if (checkcol(arr, i, n))
			{
				arr[depth][i] = n;
				dfs(depth + 1, n, arr, data);
				arr[depth][i] = 0;
			}
		}
		i++;
	}
	if (depth == 4)
		dfs(0, n - 1, arr, data);
}

int		finalcheck(int arr[][4], int a[])
{
	if (upcheck(arr, a) && downcheck(arr, a) &&\
		leftcheck(arr, a) && rightcheck(arr, a))
	{
		g_flag = 1;
		finalprint(arr);
		return (1);
	}
	return (0);
}

void	finalprint(int arr[][4])
{
	int		f;
	int		n;
	char	cc;

	f = 0;
	while (f < 4)
	{
		n = 0;
		while (n < 4)
		{
			cc = '0';
			cc += arr[f][n];
			write(1, &cc, 1);
			if (n < 3)
				write(1, " ", 1);
			n++;
		}
		write(1, "\n", 1);
		f++;
	}
}
