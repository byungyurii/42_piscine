/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:52:37 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/05 00:15:43 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *base)
{
	char	*tmp;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		tmp = base;
		while (*tmp)
		{
			--tmp;
			if (*tmp == *base)
				return (0);
		}
		base++;
	}
	return (1);
}

void	put_nbr_base_rec(long k, char *base, int cnt)
{
	if (k / cnt == 0)
		write(1, &base[k % cnt], 1);
	else
	{
		put_nbr_base_rec(k / cnt, base, cnt);
		write(1, &base[k % cnt], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	k;
	int		cnt;

	cnt = 0;
	while (base[cnt])
		cnt++;
	if (is_valid(base) == 0)
		return ;
	k = nbr;
	if (k < 0)
	{
		write(1, "-", 1);
		k *= -1;
	}
	put_nbr_base_rec(k, base, cnt);
}
