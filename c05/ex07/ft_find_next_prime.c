/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:41:06 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/05 02:14:12 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long	k;

	if (nb <= 0)
		return (0);
	k = 1;
	while (k * k < nb)
		k++;
	if (nb == k * k)
		return (k);
	return (k - 1);
}

int		ft_is_prime(int nb)
{
	int k;

	if (nb < 0 || nb == 0 || nb == 1)
	{
		return (0);
	}
	k = 1;
	while (++k <= ft_sqrt(nb))
	{
		if (nb % k == 0)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (1 && nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			break ;
		else
			nb++;
	}
	return (nb);
}
