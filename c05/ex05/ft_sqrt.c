/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:31:08 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/05 02:13:16 by gbyun            ###   ########.fr       */
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
	return (0);
}
