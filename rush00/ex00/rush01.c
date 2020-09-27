/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangslee <sangslee@student.42soule.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:19:29 by sangslee          #+#    #+#             */
/*   Updated: 2020/08/02 17:42:29 by sangslee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstrow(int y, int col)
{
	if (y == 0)
		ft_putchar('/');
	else if (y == col - 1)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	midrow(int y, int col)
{
	if (y == 0)
		ft_putchar('*');
	else if (y == col - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	lastrow(int y, int col)
{
	if (y == 0)
		ft_putchar('\\');
	else if (y == col - 1)
		ft_putchar('/');
	else
		ft_putchar('*');
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
