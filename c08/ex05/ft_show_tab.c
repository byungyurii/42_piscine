/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:05:59 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/05 08:08:16 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	long	k;
	char	a;

	k = nb;
	if (k < 0)
	{
		write(1, "-", 1);
		k *= -1;
	}
	if (k > 9)
	{
		ft_putnbr(k / 10);
		ft_putnbr(k % 10);
	}
	else
	{
		a = (int)k + '0';
		write(1, &a, 1);
	}
}

void	ft_show_tab(struct s_stock_str *ptr)
{
	while (ptr->str != '\0')
	{
		ft_putstr(ptr->str);
		write(1, "\n", 1);
		ft_putnbr(ptr->size);
		write(1, "\n", 1);
		ft_putstr(ptr->copy);
		write(1, "\n", 1);
		ptr++;
	}
}
