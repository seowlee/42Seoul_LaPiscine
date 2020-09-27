/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 20:41:02 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/04 02:08:09 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *nums, int n)
{
	if (nums[0] == 10 - n + '0')
		write(1, nums, n);
	else
		write(1, nums, n + 2);
}

void	comb(int n, int count, char *nums)
{
	int index;

	if (count == n)
	{
		print(nums, n);
		return ;
	}
	index = 0;
	while (index < 10)
	{
		if (count == 0 || nums[count - 1] < index + 48)
		{
			nums[count] = index + '0';
			comb(n, count + 1, nums);
		}
		index++;
	}
}

void	ft_print_combn(int n)
{
	char nums[n + 2];

	nums[n] = ',';
	nums[n + 1] = ' ';
	comb(n, 0, nums);
}
