/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:56:03 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/11 22:20:38 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p_str;
	char *p_to_find;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		p_str = str;
		p_to_find = to_find;
		while (*p_to_find && *p_str && *p_str == *p_to_find)
		{
			p_str++;
			p_to_find++;
		}
		if (!*p_to_find)
			return (str);
		str++;
	}
	return (0);
}
