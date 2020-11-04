/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:09:12 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/01 22:28:05 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "boolean.h"
#include "string.h"
#include "read.h"
#include "malloc.h"
#include "is_error.h"
#include "hash.h"

char	*g_buff;
char	**g_num;
char	**g_letter;

void	ft_do(char *argv)
{
	ft_cut_string(g_buff, g_num, g_letter);
	while (**g_num)
		ft_node_add(*(g_num++), *(g_letter++));
	if (!ft_search(argv, 1))
		ft_putstr("Dict Error\n");
}

int		main(int argc, char *argv[])
{
	t_bool		is_error[2];
	long long	k;
	int			rowsize;
	int			colsize;
	char		*dictfile;

	is_error[0] = 0;
	is_error[1] = input_error(argc, argv);
	dictfile = (argc == 3) ? argv[1] : "./numbers.dict";
	if (!(is_error[1]))
	{
		k = ft_read_size("./numbers.dict", &colsize);
		g_buff = (char *)malloc(sizeof(char) * k);
		is_error[1] = ft_read(dictfile, k);
		is_error[0] = dict_error(g_buff, &rowsize);
		if (!(ft_create_str_num(-1, rowsize, colsize))
				&& !(ft_create_str_letter(-1, rowsize, colsize))
				&& !(is_error[1]) && !(is_error[0]))
			ft_do(argv[argc - 1]);
	}
	if (is_error[0])
		ft_putstr("Dict Error\n");
	else if (is_error[1])
		ft_putstr("Error\n");
	return (0);
}
