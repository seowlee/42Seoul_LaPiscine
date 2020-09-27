/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:40:04 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/21 02:54:15 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_get_size(unsigned int num, int base_len, int *size)
{
	if (num >= (unsigned int)base_len)
	{
		ft_get_size(num / base_len, base_len, size);
		ft_get_size(num % base_len, base_len, size);
	}
	else
		*size += 1;
}

char	*ft_dec_to_base(int dec, char *base, int base_len)
{
	char			*result;
	unsigned int	num;
	int				size;

	num = dec;
	size = 0;
	if (dec < 0)
	{
		num *= -1;
		size += 1;
	}
	ft_get_size(num, base_len, &size);
	result = (char *)malloc(sizeof(char) * size);
	if (result == (char *)(0))
		return (char *)(0);
	if (dec < 0)
		result[0] = '-';
	result[size] = '\0';
	while ((dec >= 0 && size) || (dec < 0 && size > 1))
	{
		result[--size] = base[num % base_len];
		num = num / base_len;
	}
	return (result);
}
