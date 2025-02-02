/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:13:12 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/03 04:24:29 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
