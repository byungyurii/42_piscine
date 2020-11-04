/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:14:19 by gbyun             #+#    #+#             */
/*   Updated: 2020/10/25 16:40:14 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define N 4
#define R 4

void	perm(int depth, char **set);
int		see_up_left(char *set);
int		see_down_right(char *set);
int		is_valid_condition(char *cond);

int selected[R];
int flag[N+1];
int setrow = 0;
int checkrow[4][4];
int checkcol[4][4];
int cond[16];


void	perm(int depth, char **set)
{
	int i;
	if( R==depth){ // 모두 선택 되었음 출력하기
		i = -1;
		while(i++ < 4)
		{
			set[setrow][i+1] = selected[i] + '0';
		}
		//set[setrow][0], set[setrow][6] 입력
		set[setrow][0] = see_up_left(set[setrow]) + '0';
		set[setrow][5] = see_down_right(set[setrow]) + '0';
		setrow++;
		return;
	}
	i = 0;
	while (++i<=N)
	{
		if(flag[i]==1)
		{
			continue;
		}
		flag[i]=1;
		selected[depth]=i;
		perm(depth+1, set);
		flag[i]=0;
	}
}

int		see_up_left(char *set)
{
	int i;
	int cnt;
	char max;

	i = 0;
	cnt = 0;
	max = '0';
	set += 1;
	while(++i < 5)
	{
		if(*set > max)
		{
			max = *set;
			cnt++;
		}
		set++;
	}
	return cnt;
}

int		see_down_right(char *set)
{
	int i;
	int cnt;
	int max;

	i = 5;
	cnt = 0;
	max = 0;
	set += 4;
	while(--i > 0)
	{
		if(*set > max)
		{
			max = *set;
			cnt++;
		}
		set--;
	}
	return cnt;
}

int		is_valid_condition(char *cond)
{
	int cnt;

	cnt = 0;
	while (*cond)
	{
		while (*cond && is_white_space(*cond))
			++cond;
		if (*cond)
		{
			if ('1' <= *cond && *cond <= '4')
			{
				if (cnt == 16 || (*(cond + 1) && !is_white_space(*(cond + 1))))
					return (0);
				cond[cnt++] = *cond - '0';
			}
			else
				return (0);
			++cond;
		}
	}
	return (cnt == 16);
}

int main()
{
	int i;
	char **set;

	i = 0;
	set = (char **)malloc(24 * sizeof(char *));
	while(i++ <=24)
	{
		set[i] = (char *)malloc(6 * sizeof(char));
	}
	perm(0, set);

	for (int j = 0; j<24;j++)
	{
		write(1, set[j], 6);
		write(1, "\n", 1);
	}
	return 0;
}