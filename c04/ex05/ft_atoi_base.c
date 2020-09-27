/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 22:04:23 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/11 01:33:45 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_valid(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
				|| base[i] == ' ' || base[i] == '\t' || base[i] == '\n'
				|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_get_base_int(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_number(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi(char *str, char *base, int len)
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
	while (ft_atoi_number(str[i], base) == 1)
	{
		num *= len;
		num += ft_get_base_int(str[i], base);
		i++;
	}
	num *= minus;
	return (num);
}

int		ft_atoi_base(char *str, char *base)
{
	int len;
	int i;

	i = 0;
	if (ft_is_valid(base) == 0)
		return (0);
	while (base[i] != '\0')
		i++;
	len = i;
	return (ft_atoi(str, base, len));
}
