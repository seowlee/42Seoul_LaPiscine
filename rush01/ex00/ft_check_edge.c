/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_edge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:18:55 by mki               #+#    #+#             */
/*   Updated: 2020/08/09 20:07:38 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		upcheck(int arr[][4], int a[])
{
	int max;
	int cnt;
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		max = arr[0][i];
		cnt = 1;
		j = 1;
		while (j < 4)
		{
			if (arr[j][i] > max)
			{
				cnt++;
				max = arr[j][i];
			}
			j++;
		}
		if (cnt != a[i++])
			return (0);
	}
	return (1);
}

int		downcheck(int arr[][4], int a[])
{
	int max;
	int cnt;
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		max = arr[3][i];
		cnt = 1;
		j = 3;
		while (j >= 0)
		{
			if (arr[j][i] > max)
			{
				cnt++;
				max = arr[j][i];
			}
			j--;
		}
		if (cnt != a[i++ + 4])
			return (0);
	}
	return (1);
}

int		leftcheck(int arr[][4], int a[])
{
	int max;
	int cnt;
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		max = arr[i][0];
		cnt = 1;
		j = 1;
		while (j < 4)
		{
			if (arr[i][j] > max)
			{
				cnt++;
				max = arr[i][j];
			}
			j++;
		}
		if (cnt != a[i++ + 8])
			return (0);
	}
	return (1);
}

int		rightcheck(int arr[][4], int a[])
{
	int max;
	int cnt;
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		max = arr[i][3];
		cnt = 1;
		j = 3;
		while (j >= 0)
		{
			if (arr[i][j] > max)
			{
				cnt++;
				max = arr[i][j];
			}
			j--;
		}
		if (cnt != a[i++ + 12])
			return (0);
	}
	return (1);
}
