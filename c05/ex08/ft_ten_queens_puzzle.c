/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 14:51:28 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/15 11:34:16 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solutions(int *queens)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = queens[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		is_promising(int row, int *queens)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (queens[i] == queens[row])
			return (0);
		if (row - i == queens[row] - queens[i] ||
				row - i == queens[i] - queens[row])
			return (0);
		i++;
	}
	return (1);
}

void	backtracking(int row, int *cnt, int *queens)
{
	int col;

	if (row == 10)
	{
		print_solutions(queens);
		*cnt += 1;
		return ;
	}
	col = 0;
	while (col < 10)
	{
		queens[row] = col;
		if (is_promising(row, queens))
			backtracking(row + 1, cnt, queens);
		col++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int		queens[10];
	int		cnt;

	cnt = 0;
	backtracking(0, &cnt, queens);
	return (cnt);
}
