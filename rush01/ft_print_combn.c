/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:21:08 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/25 11:17:03 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	comb(char *digit, int max, int n, int i, char **set)
{
	if (i > 10)
	{
		return ;
	}
	if (max == 0)
	{
		int k;

		k = -1;
		while(k++ < n)
		{
			**set++ = *(digit+10-n);
			digit++;
		}

		write(1, set + 10 - n, n);
		if (digit[10 - n] == 10 - n + '0')
		{
			return ;
		}
		write(1, ", ", 2);
		return ;
	}
	digit[10 - max] = i + '0';
	comb(digit, max - 1, n, i + 1, set);
	comb(digit, max, n, i + 1, set);
}

void	ft_print_combn(int n)
{
	char	digit[10];
	int i;
	char **set;

	i = 0;
	set = (char **)malloc(24 * sizeof(char *));
	while(i++ <=4)
	{
		set[i] = (char *)malloc(6 * sizeof(char));
	}
	
	comb(digit, n, n, 0, set);
}

int main()
{
	ft_print_combn(4);
	return 0;
}