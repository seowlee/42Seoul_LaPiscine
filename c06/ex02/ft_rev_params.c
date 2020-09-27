/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 17:27:06 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/12 17:38:23 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int rev_i;
	int j;

	rev_i = argc - 1;
	while (rev_i > 0)
	{
		j = 0;
		while (argv[rev_i][j])
		{
			write(1, &argv[rev_i][j], 1);
			j++;
		}
		rev_i--;
		write(1, "\n", 1);
	}
	return (0);
}
