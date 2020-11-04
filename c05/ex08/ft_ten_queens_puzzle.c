/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:45:00 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/29 02:21:55 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int setnumber;

void	init(int **set)
{
	int r;
	int c;

	r = 10;
	c = 10;
	while(r-- > 0)
	{
		while(c-- > 0)
		{
			set[r][c] = 0;
		}
	}
}

void	check(int **set, int r, int c)
{
	int rowset;
	int colset;

	rowset = 10;
	colset = 10;
	while(rowset-- > 0)
	{
		set[r][rowset]++;
	}
	while(colset-- > 0)
	{
		set[colset][c]++;
	}
}

void	find(int **set, int row, int col)
{
	if(col == 10)
	{
		setnumber++;
		//finish loop
		//9일때까지 돌고 프린트 할 수 있으면 그것도 나쁘진.. 
		return;
	}
	if(set[row][col] != 0)
	{
		return;
	}
	check(set, row, col);
	write(1, &row, 1);
	while(row < 10)
	{
		find(set, row, col++);
	}
}

int		ft_ten_queens_puzzle(void)
{
	int set[10][10];

	setnumber = 0;
	init((int **)set);
	find((int **)set, 0, 0);
	return setnumber;

}

int		main()
{
	ft_ten_queens_puzzle();
	return 0;
}