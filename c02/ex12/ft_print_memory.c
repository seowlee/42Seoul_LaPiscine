/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 00:28:28 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/11 13:51:08 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_control_to_dot(void *addr, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (index < size)
	{
		if (addr[index] > 31 && addr[index] < 127)
			write(1, addr + i, 1);
		else
			write(1, "." 1);
		index++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int length;

	while(size)
	{
		if(size > 15)
			length = 16;
		else
			length = size;
		print_control_to_dot(addr,length);
		write(1, "\n", 1);


	}
	return (addr);
}
