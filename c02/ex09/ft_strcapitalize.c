/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 07:19:12 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/29 01:27:14 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowercase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		*str = *str - 'A' + 'a';
	}
	return (str);
}

char	*ft_struppercase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 'a' + 'A';
	}
	return (str);
}

int		ft_is_alphabet_and_num(char str)
{
	if ((str >= '0' && str <= '9'))
	{
		return (0);
	}
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	int		i;

	tmp = str;
	str = str - 1;
	i = 0;
	while (*(++str))
	{
		if (ft_is_alphabet_and_num(*str) == 1)
		{
			i = 0;
			continue;
		}
		if (i++ == 0)
		{
			ft_struppercase(str);
			continue;
		}
		ft_strlowercase(str);
		i++;
	}
	return (tmp);
}
