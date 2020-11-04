/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:52:57 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 22:43:05 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "malloc.h"
#include "boolean.h"

extern	char	**g_num;
extern	char	**g_letter;

t_bool		ft_create_str_num(int k, int rowsize, int colsize)
{
	k = -1;
	g_num = (char **)malloc(rowsize * sizeof(char *));
	if (g_num == NULL)
	{
		ft_free_str(g_num, 1);
		return (1);
	}
	while (++k < rowsize)
	{
		g_num[k] = (char *)malloc(colsize * sizeof(char));
		if (g_num[k] == NULL)
		{
			ft_free_str(&g_num[0], k);
			ft_free_str(g_num, 1);
			return (1);
		}
	}
	return (0);
}

t_bool		ft_create_str_letter(int k, int rowsize, int colsize)
{
	k = -1;
	g_letter = (char **)malloc(rowsize * sizeof(char *));
	if (g_letter == NULL)
	{
		ft_free_str(g_letter, 1);
		return (1);
	}
	while (++k < rowsize)
	{
		g_letter[k] = (char *)malloc(colsize * sizeof(char));
		if (g_letter[k] == NULL)
		{
			ft_free_str(&g_letter[0], k);
			ft_free_str(g_letter, 1);
			return (1);
		}
	}
	return (0);
}

void		ft_free_str(char **str, long long len)
{
	int		k;

	free(str);
	k = -1;
	while (++k <= len)
		free(&str[k]);
}
