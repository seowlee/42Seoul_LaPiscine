/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:22:00 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/11 16:25:36 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	char *rp;

	rp = dest;
	while (n && (*rp++ = *str++))
	{
		n--;
	}
	if (n > 0)
	{
		while (--n)
		{
			*rp++ = '\0';
		}
	}
	return (dest);
}
