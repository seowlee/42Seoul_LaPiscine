/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 16:13:59 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/21 02:58:23 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int count;
	int *temp_ptr;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	temp_ptr = (int *)malloc(sizeof(int) * (max - min));
	if (!temp_ptr)
		return (-1);
	count = 0;
	while (min < max)
	{
		temp_ptr[count] = min;
		count++;
		min++;
	}
	*range = temp_ptr;
	return (count);
}
