/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:58:10 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/16 16:32:23 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_null(void)
{
	char *result;

	result = (char *)malloc(sizeof(char));
	result[0] = '\0';
	return (result);
}

int		get_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		added_len;
	char	*joinstr;

	if (size == 0)
		return (ft_null());
	i = 0;
	added_len = 0;
	while (i < size)
		added_len += get_strlen(strs[i++]);
	added_len += get_strlen(sep) * (size - 1);
	joinstr = (char *)malloc(sizeof(char) * (added_len + 1));
	joinstr[0] = '\0';
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(joinstr, strs[i++]);
		ft_strcat(joinstr, sep);
	}
	ft_strcat(joinstr, strs[i]);
	return (joinstr);
}
