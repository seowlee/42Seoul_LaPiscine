/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taewkim <taewkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:58:38 by taewkim           #+#    #+#             */
/*   Updated: 2020/08/02 17:06:56 by taewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstrow(int y, int col)
{
	if (y == 0)
		ft_putchar('A');
	else if (y == col - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	midrow(int y, int col)
{
	if (y == 0)
		ft_putchar('B');
	else if (y == col - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	lastrow(int y, int col)
{
	if (y == 0)
		ft_putchar('A');
	else if (y == col - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int col, int row)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < row)
	{
		while (y < col)
		{
			if (x == 0)
				firstrow(y, col);
			else if (x == row - 1)
				lastrow(y, col);
			else
				midrow(y, col);
			y++;
		}
		ft_putchar('\n');
		x++;
		y = 0;
	}
}
