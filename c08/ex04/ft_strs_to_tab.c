/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:14:45 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/05 05:58:29 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strdup(char *src)
{
	char			*tmp;
	unsigned int	len;

	len = ft_strlen(src);
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (tmp - len);
}


struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*r;
	int				i;

	i = 0;
	if(ac <= 0)
	{
		r = {0, {0}, {0}};
		return (r);
	}
	if (!(r = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		r[i].size = ft_strlen(av[i]);
		r[i].str = ft_strdup(av[i]);
		r[i].copy = r[i].str;
		i++;
	}
	r[i].str = 0;
	return r;
}

