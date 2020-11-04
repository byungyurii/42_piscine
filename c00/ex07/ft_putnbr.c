/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 00:14:22 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/20 08:05:12 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	change_to_char(int nb, char *num, int i)
{
	if (nb < 10)
	{
		num[i] = nb + '0';
		write(1, num + i, 10 - i);
		return ;
	}
	else
	{
		num[i] = nb % 10 + '0';
		change_to_char(nb / 10, num, --i);
	}
}

void	ft_putnbr(int nb)
{
	char num[10];

	if (nb < 0)
	{
		write(1, "-", 1);
		num[9] = (nb % 10 * -1) + '0';
		nb = nb / 10 * -1;
		change_to_char(nb, num, 8);
	}
	else
	{
		change_to_char(nb, num, 9);
	}
}
