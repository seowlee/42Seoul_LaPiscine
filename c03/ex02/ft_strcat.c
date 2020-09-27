/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 10:02:54 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/10 10:59:19 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int src_index;

	index = 0;
	src_index = 0;
	while (dest[index] != '\0')
		index++;
	while (src[src_index] != '\0')
	{
		dest[index + src_index] = src[src_index];
		src_index++;
	}
	dest[index + src_index] = '\0';
	return (dest);
}
