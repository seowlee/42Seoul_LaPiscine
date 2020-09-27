/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:48:22 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/10 11:54:19 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int index;
	unsigned int src_index;

	index = 0;
	src_index = 0;
	while (dest[index] != '\0')
		index++;
	while (src[src_index] != '\0' && src_index < nb)
	{
		dest[index + src_index] = src[src_index];
		src_index++;
	}
	dest[index + src_index] = '\0';
	return (dest);
}
