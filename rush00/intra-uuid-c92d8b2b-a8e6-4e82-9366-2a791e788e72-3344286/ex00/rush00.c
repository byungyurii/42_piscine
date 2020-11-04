/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 12:45:03 by heahn             #+#    #+#             */
/*   Updated: 2020/10/18 14:09:57 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	ft_putchar(char c);

void		print_row(int x, char start, char mid, char end)
{
	int i;

	i = x - 2;
	ft_putchar(start);
	while (i > 0)
	{
		ft_putchar(mid);
		i--;
	}
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_row(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			print_row(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
			print_row(x, 'o', '-', 'o');
	}
	return ;
}
