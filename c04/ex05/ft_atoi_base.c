/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:34:43 by gbyun             #+#    #+#             */
/*   Updated: 2020/11/03 01:59:18 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(char *base)
{
	char *tmp;

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

int		ft_atoi(char *str)
{
	int i;
	int r;

	i = 1;
	r = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}// 여기까지는 그대로
	//base -> dec 으로 바꿔야함 base 사이즈 알아야함. 
	//while in base , 
	//r = r * base size + *str in base 10
	while (*str >= '0' && *str <= '9')// while in base
	{
		r = r * 10 + ((*str) - '0');
		str++;
	}
	return (i * r);
}

void	chg_in_char_base(char *in_char_base, char *base, int *in_base, int k)
{
	while (--k >= 0)
		in_char_base[k] = *(base + in_base[k]);
}


void	ft_putstr_base(char *str, char *base, int cnt)
{
	int		k;
	int		in_base[20];
	char	in_char_base[20];
	int		i;
	int		j;

	i = cnt;
	while (--i)
	{
		j = 0;
		while(j + i <= cnt)
		


	}



	cnt = 0;
	k = chg_in_base(in_base, nbr, cnt);
	chg_in_char_base(in_char_base, base, in_base, k);
	if (nbr < 0)
		write(1, "-", 1);
	write(1, in_char_base, k);
}

int		ft_atoi_base(char *str, char *base)
{
	char	*deci;
	int		cnt;
	
	if (is_valid(base) == 0)
		return (0);
	cnt = 0;
	while(*base++)
		cnt++;
	chg_in_deci_base(in_char_base, base, in_base, k);
	
}
