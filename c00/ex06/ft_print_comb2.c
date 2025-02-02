/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 23:02:48 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/20 08:02:18 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
{
	char	two_digit[2];

	two_digit[0] = (i / 10) + '0';
	two_digit[1] = (i % 10) + '0';
	write(1, two_digit, 2);
}

void	ft_print_comb2(void)
{
	int		a[2];

	a[0] = -1;
	while (a[0]++ < 98)
	{
		a[1] = a[0];
		while (a[1]++ < 99)
		{
			print(a[0]);
			write(1, " ", 1);
			print(a[1]);
			if (!(a[0] == 98 && a[1] == 99))
			{
				write(1, ", ", 2);
			}
		}
	}
}
