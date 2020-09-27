/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:32:21 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/11 16:49:38 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int index;
    
    index = 0;
    if (size > 0)
    {
        while (index < size - 1 && src[index] != '\0')
        {
            dest[index] = src[index];
            index++;
        }
    }
    dest[index] = '\0';
    while (src[index] != '\0')
        index++;
    return (index);
}
