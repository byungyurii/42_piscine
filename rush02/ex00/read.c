/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 10:09:26 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 22:26:19 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "read.h"
#include "boolean.h"

extern	char	*g_buff;

t_bool	ft_read(char *dict, long long k)
{
	int		fd;

	if (0 < (fd = open(dict, O_RDONLY)))
	{
		read(fd, g_buff, k);
		close(fd);
	}
	else
		return (1);
	return (0);
}

int		ft_read_size(char *dict, int *colsize)
{
	int		fd;
	int		k;
	int		max;
	int		col;
	char	tmp[1];

	col = 0;
	max = 0;
	if (0 < (fd = open(dict, O_RDONLY)))
	{
		k = 0;
		while (read(fd, tmp, 1) && ++col && ++k)
		{
			if (*tmp == '\n')
			{
				max = max < col ? col : max;
				col = 0;
			}
		}
		close(fd);
	}
	else
		return (1);
	*colsize = max;
	return (k);
}
