/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:18:14 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/05 00:32:44 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


//dec까지는 잘 나옴. to_base로 바꾸는게안됨... 왜... 왜ㄱ때문에.....

int		ft_search(char *str, char target)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == target)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi(char *str, char *base, int cnt)
{
	int i;
	int r;
	int k;

	i = 1;
	r = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == '\t')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	k = ft_search(base, (*str));
	while (k != -1) //in base
	{
		r = r * cnt + k;
		str++;
		k = ft_search(base, (*str));
	}
	return (i * r);
}



int		is_valid(char *base)
{
	char	*tmp;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*base)
	{
		if (*base == ' ' || *base == '\n' || *base == '\v'
			|| *base == '\f' || *base == '\r' || *base == '\t')
			return (0);
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

char	*put_nbr_base_rec(long k, char *base, int cnt, int i, char *result_arr)
{
	char	*tmp;

	tmp = result_arr;
	if (k / cnt == 0)
	{
		*tmp = base[k % cnt];
		return tmp + 1;
	}
	else
	{
		tmp = put_nbr_base_rec(k / cnt, base, cnt, i, tmp);
		*tmp =  base[k % cnt];
		return tmp + 1;
	}
}

char	*ft_putnbr_base(int nbr, char *base, int cnt_to, char *result_arr)
{
	long	k;
	char	*tmp;

	k = nbr;
	tmp = (char *)malloc(1000);
	if (k < 0)
	{
		*result_arr = '-';
		k *= -1;
		tmp = put_nbr_base_rec(k, base, cnt_to, 1, result_arr + 1);
	}
	else
		tmp = put_nbr_base_rec(k, base, cnt_to, 1, result_arr);
	*tmp = '\0';
	return tmp;
}

int		ft_base_to_size(int nbr, int size)
{
	int i;
	int k;

	i = 1;
	k = 1;
	while (nbr >= i)
	{
		i *= size;
		k++;
	}
	return (k);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned long	cnt_from;
	unsigned long	cnt_to;
	int			arr_size;
	int			nbr_dec;
	char		*result_arr;

	if (!(is_valid(base_from) && is_valid(base_to)))
		return (NULL);
	cnt_from = 0;
	while (base_from[cnt_from])
		cnt_from++;
	cnt_to = 0;
	while (base_to[cnt_to])
		cnt_to++;
	nbr_dec = ft_atoi(nbr, base_from, cnt_from);
	arr_size = ft_base_to_size(nbr_dec, cnt_to);
	printf("nbr_dec %d \t\tfrom : %lu\t to %lu\tnbr = %d arrsize = %d\n", nbr_dec, cnt_from, cnt_to, nbr_dec, arr_size);
	result_arr = (char *)malloc(sizeof(char) * (arr_size + 2));
	ft_putnbr_base(nbr_dec, base_to, cnt_to, result_arr);
	//printf("result = %s\n", result_arr);
	return (result_arr);
}
