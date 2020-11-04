/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 02:34:21 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 23:42:38 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "is_error.h"
#include <stdio.h>

t_bool		dict_error(char *buff, int *row)
{
	while (*buff)
	{
		while (*buff == '\n')
			buff++;
		if (*buff && !(*buff >= '0' && *buff <= '9'))
			buff++;
		while (*buff >= '0' && *buff <= '9')
			buff++;
		if (*buff && !(*buff == ' ' || *buff == ':'))
			return (1);
		while (*buff == ' ')
			buff++;
		if (*buff && *buff++ != ':')
			return (1);
		while (*buff == ' ')
			buff++;
		while (*buff && *buff != '\n')
		{
			if (*buff < 33 || *buff > 126)
				return (1);
			buff++;
		}
		(*row)++;
	}
	return (0);
}

t_bool		input_error(int argc, char **argv)
{
	int k;
	int j;

	if (!(argc == 2 || argc == 3))
		return (1);
	k = argc - 1;
	j = 0;
	if (argv[k][j] == '\0')
		return (1);	
	while (argv[k][j])
	{
		if (!(argv[k][j] >= '0' && argv[k][j] <= '9'))
			return (1);
		j++;
	}
	return (0);
}
