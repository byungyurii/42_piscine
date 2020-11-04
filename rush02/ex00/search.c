/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjlee <wonjlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 04:28:45 by wonjlee           #+#    #+#             */
/*   Updated: 2020/11/01 23:00:20 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "hash.h"
#include "string.h"
#include "malloc.h"

int		ft_larger(char *input_value, int idx1, int idx2, int space)
{
	int		check;
	char	*str[3];
	char	*return_val;

	check = 0;
	while (!check && idx1++ < idx2--)
	{
		str[0] = ft_cut_left(input_value, idx1 - 1);
		str[1] = ft_cut_right(input_value, idx1 - 1);
		str[2] = ft_cut_digit(input_value, idx1 - 1);
		if (ft_hash_find(str[2], &return_val) && ft_search(str[0], space * 1))
		{
			write(1, " ", 1);
			write(1, return_val, ft_strlen(return_val));
			if (!ft_strcmp(str[2], input_value)
					|| !ft_strcmp(str[2] + 1, str[1]))
				return (1);
			if ((check = ft_search(str[1], space * 0)))
				return (1);
		}
	}
	ft_free_str(str, 3);
	return (0);
}

int		ft_smaller_than_two(char *input_value, int space)
{
	char	*digit;
	char	*return_val;

	if (!space)
		write(1, " ", 1);
	if (ft_strlen(input_value) == 2)
	{
		digit = ft_cut_digit(input_value, 0);
		if (ft_hash_find(digit, &return_val))
		{
			write(1, return_val, ft_strlen(return_val));
			return (ft_search(++input_value, space * 1));
		}
	}
	else
	{
		if (ft_hash_find(input_value, &return_val))
		{
			write(1, return_val, ft_strlen(return_val));
			return (1);
		}
	}
	return (0);
}

int		ft_smaller(char *input, int space)
{
	char	*return_val;

	if (ft_strlen(input) == 2 &&
			(*(input + 1) == '0' || *input == '1'))
	{
		!space ? write(1, " ", 1) : 0;
		if (ft_hash_find(input, &return_val))
		{
			write(1, return_val, ft_strlen(return_val));
			return (1);
		}
	}
	else
		return (ft_smaller_than_two(input, space));
	return (0);
}

int		ft_search(char *input, int space)
{
	int		idx1;
	int		idx2;
	int		ans;

	ans = 0;
	idx1 = 1;
	idx2 = ft_strlen(input);
	while (*input == '0')
	{
		if (!*(input + 1) && space)
			break ;
		input++;
	}
	if (ft_strlen(input) > 2)
		ans = ft_larger(input, idx1, idx2, space);
	else
	{
		ans = ft_smaller(input, space);
	}
	return (ans);
}
