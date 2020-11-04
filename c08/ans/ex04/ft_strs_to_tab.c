/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juoh <juoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:10:33 by juoh              #+#    #+#             */
/*   Updated: 2020/11/04 20:32:02 by juoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char				*ft_strdup(char *str)
{
	char	*s;
	int		len;
	int		i;

	len = ft_strlen(str);
	s = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = 0;
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			i;

	a = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		a[i].size = ft_strlen(av[i]);
		a[i].copy = ft_strdup(av[i]);
		a[i].str = av[i];
		i++;
	}
	a[i].str = 0;
	return (a);
}
