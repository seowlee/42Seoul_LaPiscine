/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 00:58:24 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/13 01:06:59 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*result;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	result = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
