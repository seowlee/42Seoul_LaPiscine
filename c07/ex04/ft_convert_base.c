/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:30:48 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/21 02:53:27 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_dec_to_base(int dec, char *base, int base_len);

int		ft_is_valid(char *base, int *count)
{
	int i;
	int j;

	i = 0;
	*count = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
				|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
		*count = *count + 1;
	}
	return (1);
}

int		is_atoi_num(char *str, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (*str == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		get_base_to_int(char *str, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (*str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi(char *str, char *base, int base_len)
{
	int i;
	int minus;
	int num;

	i = 0;
	minus = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (is_atoi_num((str + i), base))
	{
		num *= base_len;
		num += get_base_to_int((str + i), base);
		i++;
	}
	num *= minus;
	return (num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int num;
	int base_from_len;
	int base_to_len;

	if (ft_is_valid(base_from, &base_from_len))
	{
		num = ft_atoi(nbr, base_from, base_from_len);
		if (ft_is_valid(base_to, &base_to_len))
			return (ft_dec_to_base(num, base_to, base_to_len));
	}
	return (void *)(0);
}
