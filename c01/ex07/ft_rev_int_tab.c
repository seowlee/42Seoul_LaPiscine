/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:32:56 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/04 22:10:26 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int rev;
	int i;
	int temp;

	rev = size - 1;
	i = 0;
	while (i < rev)
	{
		temp = tab[i];
		tab[i] = tab[rev];
		tab[rev] = temp;
		i++;
		rev--;
	}
}
