/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:36:35 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/15 12:59:26 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 2)
		return (1);
	else if (nb <= 1 || nb % 2 == 0)
		return (0);
	else
	{
		i = 3;
		while (i < nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
		return (1);
	}
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (!ft_is_prime(nb))
			nb++;
		return (nb);
	}
}
