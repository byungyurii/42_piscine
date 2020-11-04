/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:40:03 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/03 03:12:52 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_size(char *set)
{
	unsigned int	i;

	i = 0;
	while (*set)
	{
		set++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;
	unsigned int	j;

	dest_length = get_size(dest);
	src_length = get_size(src);
	i = 0;
	j = dest_length;
	while ((src[i]) && i + 1 + dest_length < size)
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	if (size < dest_length)
		src_length += size;
	else
		src_length += dest_length;
	return (src_length);
}
