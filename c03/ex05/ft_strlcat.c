/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 14:05:06 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/10 16:13:11 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_index;
	unsigned int s_index;
	unsigned int i;

	d_index = 0;
	s_index = 0;
	i = 0;
	while (dest[d_index] != '\0')
		d_index++;
	while (src[s_index] != '\0')
		s_index++;
	while (src[i] != '\0' && i < ((long long)size - d_index - 1))
	{
		dest[d_index + i] = src[i];
		i++;
	}
	dest[d_index + i] = '\0';
	if (d_index > size)
		return (size + s_index);
	else
		return (d_index + s_index);
}
