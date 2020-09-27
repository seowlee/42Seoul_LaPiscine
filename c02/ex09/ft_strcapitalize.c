/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 14:26:04 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/11 15:17:49 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		return (1);
	return (0);
}

int		is_upper(char *ch)
{
	if (*ch >= 'A' && *ch <= 'Z')
		return (1);
	return (0);
}

int		is_numeric(char *ch)
{
	if (*ch >= '0' && *ch <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	*pre;
	char	*result;

	index = 0;
	result = str;
	while (*str != '\0')
	{
		pre = str - 1;
		if (index == 0 && is_lower(str))
			*str -= 32;
		else if ((is_numeric(pre) || is_lower(pre) || is_upper(pre))
				&& is_upper(str))
			*str += 32;
		else if ((!is_numeric(pre) && !is_lower(pre) && !is_upper(pre))
				&& is_lower(str))
			*str -= 32;
		index++;
		str++;
	}
	return (result);
}
