/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seowlee <seowlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 21:19:07 by seowlee           #+#    #+#             */
/*   Updated: 2020/08/19 13:52:43 by seowlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		get_nbr_rows(char *str, char *charset)
{
	int nbr_rows;
	int i;

	nbr_rows = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (((i == 0) && !is_charset(str[i], charset)) ||
				(is_charset(str[i - 1], charset)
					&& !is_charset(str[i], charset)))
			nbr_rows++;
		i++;
	}
	return (nbr_rows);
}

int		get_nbr_cols(char *word, char *charset)
{
	int nbr_cols;
	int i;

	nbr_cols = 0;
	i = 0;
	while (is_charset(word[i], charset) == 0 && word[i] != '\0')
	{
		nbr_cols++;
		i++;
	}
	return (nbr_cols);
}

int		size_of_copy_str(char *str, char *charset, char *result_row)
{
	int	col;
	int i;

	col = 0;
	i = 0;
	while (!is_charset(str[i], charset) && str[i] != '\0')
	{
		result_row[col] = str[i];
		i++;
		col++;
	}
	result_row[col] = '\0';
	return (col);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		row;

	i = 0;
	row = 0;
	while (str[i] != '\0')
		i++;
	result = (char **)malloc(sizeof(char *) * (get_nbr_rows(str, charset) + 1));
	i = 0;
	while (str[i] != '\0')
	{
		if (((i == 0) && !is_charset(str[i], charset)) ||
				(is_charset(str[i - 1], charset)
					&& !is_charset(str[i], charset)))
		{
			result[row] = (char *)malloc(get_nbr_cols(&str[i], charset));
			i += size_of_copy_str(&str[i], charset, result[row]);
			row++;
		}
		i++;
	}
	result[row] = 0;
	return (result);
}
