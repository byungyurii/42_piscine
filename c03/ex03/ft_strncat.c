/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:15:57 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/03 03:12:43 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src && nb > 0)
	{
		*tmp++ = *src++;
		nb--;
	}
	*tmp = '\0';
	return (dest);
}
