/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:18:32 by mki               #+#    #+#             */
/*   Updated: 2020/08/09 19:49:04 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

int		ft_in_error_1234(char in[]);
int		ft_in_error(int argc, char in[]);
void	ft_data(int data[], char input[]);
void	dfs(int depth, int n, int arr[][4], int data[]);
int		finalcheck(int arr[][4], int a[]);
void	finalprint(int arr[][4]);
int		checkcol(int arr[][4], int col, int n);
int		upcheck(int arr[][4], int a[]);
int		downcheck(int arr[][4], int a[]);
int		leftcheck(int arr[][4], int a[]);
int		rightcheck(int arr[][4], int a[]);

#endif
