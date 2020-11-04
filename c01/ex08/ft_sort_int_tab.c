/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 02:38:29 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/25 14:12:09 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int j;
	int i;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				tmp = *(tab + j);
				*(tab + j) = *(tab + i);
				*(tab + i) = tmp;
			}
		}
	}
}
