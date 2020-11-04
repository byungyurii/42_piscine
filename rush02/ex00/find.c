/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjlee <wonjlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:27:28 by wonjlee           #+#    #+#             */
/*   Updated: 2020/11/01 22:45:03 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stdlib.h>

char	*ft_cut_right(char *str, int range)
{
	char	*cut_str;
	int		idx;

	idx = 0;
	cut_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1 - range));
	if (cut_str < 0)
		return ("Error");
	str += range;
	while (*str)
		cut_str[idx++] = *(str++);
	cut_str[idx] = 0;
	return (cut_str);
}

char	*ft_cut_left(char *str, int range)
{
	char	*cut_str;
	int		idx;

	idx = 0;
	cut_str = (char *)malloc(sizeof(char) * (range));
	if (cut_str < 0)
		return ("Error");
	while (idx < range)
		cut_str[idx++] = *(str++);
	cut_str[idx] = 0;
	return (cut_str);
}

char	*ft_cut_digit(char *input, int idx1)
{
	char	*cut_str;
	int		idx;

	idx = 0;
	if (ft_strlen(input) <= 2)
	{
		cut_str = (char *)malloc(sizeof(char) * 2);
		cut_str[idx++] = *input;
		cut_str[idx] = '0';
		return (cut_str);
	}
	cut_str = (char *)malloc(sizeof(char) * (ft_strlen(input) + 1 - idx1));
	cut_str[idx++] = '1';
	while (idx < ft_strlen(input) + 1 - idx1)
		cut_str[idx++] = '0';
	return (cut_str);
}
