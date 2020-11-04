/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c01.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <dlee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 12:12:36 by dlee              #+#    #+#             */
/*   Updated: 2020/10/20 22:06:14 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#define NEWLINE putchar('\n')

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int 	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int n;
	printf("ex00\n");
	ft_ft(&n);
	printf("%d", n);
	NEWLINE;
	NEWLINE;

	n = 0;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
	printf("ex01\n");
	ft_ultimate_ft(&p8);
	printf("%d", n);
	NEWLINE;
	NEWLINE;

	int two = 2;
	int four = 4;
	printf("ex02\n");
	ft_swap(&two, &four);
	printf("%d%d should be 42", two, four);
	NEWLINE;
	NEWLINE;

	int three = 3;
	int ten = 10;
	int div;
	int mod;
	printf("ex03\n");
	ft_div_mod(ten, three, &div, &mod);
	printf("%d / %d = %d\n", ten, three, div);
	printf("%d %% %d = %d", ten, three, mod);
	NEWLINE;
	NEWLINE;

	int a[2] = {10, 3};
	printf("ex04\n");
	ft_ultimate_div_mod(&a[0], &a[1]);
	printf("%d / %d = %d\n", ten, three, a[0]);
	printf("%d %% %d = %d", ten, three, a[1]);
	NEWLINE;
	NEWLINE;

	printf("ex05\n");
	ft_putstr("hello world");
	NEWLINE;
	NEWLINE;

	printf("ex06\n");
	printf("%d", ft_strlen("000000000000000000000000000000000000000000"));
	NEWLINE;
	NEWLINE;

	int i = 0;
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("ex07\n");
	ft_rev_int_tab(tab, 10);
	while (i < 10)
		putchar(tab[i++] + '0');
	NEWLINE;
	NEWLINE;

	i = 0;
	int tab_[10] = {30, 10, 20, 0, 40, 90, 60, 70, 80, 50};
	printf("ex08\n");
	ft_sort_int_tab(tab_, 10);
	while (i < 10)
		printf("%d ", tab_[i++]);
}
