/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strgoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 03:32:33 by marvin            #+#    #+#             */
/*   Updated: 2020/11/05 00:44:07 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		k;

	if (size <= 0)
		return (arr = (char *)malloc(0));
	k = sizeof(strs) + sizeof(sep) * size;
	if (!(arr = (char *)malloc(k)))
		return (NULL);
	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			arr[++k] = strs[i][j];
		if (i == (size - 1))
			continue;
		j = -1;
		while (sep[++j])
			arr[++k] = sep[j];
	}
	arr[++k] = '\0';
	return (arr);
}
