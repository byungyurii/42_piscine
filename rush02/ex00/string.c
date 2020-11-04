/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:04:04 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/01 20:39:19 by wonjlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

extern	char	**g_num;
extern	char	**g_letter;

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strdup(char *s1, char *s2)
{
	int		len;
	char	*str;

	len = ft_strlen(s2) + 1;
	s1 = malloc(sizeof(char) * len);
	if (!s1)
		return (0);
	str = s1;
	while (*s2)
		*s1++ = *s2++;
	*s1 = 0;
	return (str);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_cut_string(char *buff, char **g_num, char **g_letter)
{
	int		i;
	int		j;

	i = 0;
	while (*buff)
	{
		while (*buff && *buff != '\n')
		{
			j = 0;
			while (*buff >= '0' && *buff <= '9')
				*(*(g_num + i) + j++) = *buff++;
			while (*buff == ' ' || *buff == ':')
				buff++;
			j = 0;
			while (*buff >= '!' && *buff <= '~')
			{
				*(*(g_letter + i) + j++) = *buff++;
			}
			i++;
		}
		buff++;
	}
}
