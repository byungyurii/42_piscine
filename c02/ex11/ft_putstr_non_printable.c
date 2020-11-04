/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:38:47 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/02 23:19:01 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char *hexa;

	hexa = "0123456789abcdf";
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			write(1, &hexa[(unsigned char)(*str) / 16], 1);
			write(1, &hexa[(unsigned char)(*str) % 16], 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
