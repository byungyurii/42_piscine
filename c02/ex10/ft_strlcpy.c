/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:44:26 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/29 01:40:51 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_size(char *src)
{
	unsigned int cnt;

	cnt = 0;
	while (*src)
	{
		cnt++;
		src++;
	}
	return (cnt);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int tmp;
	unsigned int i;

	tmp = get_size(src);
	i = -1;
	while (++i + 1 < size && *src)
	{
		*dest++ = *src++;
	}
	if (i < size)
	{
		while (++i < size)
		{
			*dest++ = '\0';
		}
	}
	*dest = '\0';
	return (tmp);
}
