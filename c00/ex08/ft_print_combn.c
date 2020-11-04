/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:21:08 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/20 08:08:09 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb(char *digit, int max, int n, int i)
{
	if (i > 10)
	{
		return ;
	}
	if (max == 0)
	{
		write(1, digit + 10 - n, n);
		if (digit[10 - n] == 10 - n + '0')
		{
			return ;
		}
		write(1, ", ", 2);
		return ;
	}
	digit[10 - max] = i + '0';
	comb(digit, max - 1, n, i + 1);
	comb(digit, max, n, i + 1);
}

void	ft_print_combn(int n)
{
	char	digit[10];
	
	comb(digit, n, n, 0);
}
