/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 03:18:28 by marvin            #+#    #+#             */
/*   Updated: 2020/11/04 18:07:44 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		i;

	i = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	if (!(arr = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}
