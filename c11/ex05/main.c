/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:00:28 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/21 15:40:40 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_header.h"

int		(*find_operator(char *str))(int, int)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (0);
	if (str[0] == '+')
		return (&add);
	else if (str[0] == '-')
		return (&sub);
	else if (str[0] == '*')
		return (&mul);
	else if (str[0] == '/')
		return (&div);
	else if (str[0] == '%')
		return (&mod);
	return (0);
}

int		is_valid_value(int (*f)(int, int), int b)
{
	if (f == 0)
	{
		ft_putnbr(0);
		return (0);
	}
	else if (b == 0 && f == div)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (b == 0 && f == mod)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	(*operation)(int, int);
	int result;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		operation = find_operator(argv[2]);
		if (is_valid_value(operation, b))
		{
			result = operation(a, b);
			ft_putnbr(result);
		}
	}
	return (0);
}
