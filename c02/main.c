/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbyun <gbyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:34:37 by dlee              #+#    #+#             */
/*   Updated: 2020/11/03 00:33:27 by gbyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define NEWLINE putchar('\n')

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				is_printable(char c);
void			ft_putstr_non_printable(char *str);
//void			*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	
	char source[] = "hello world\0";
	char dest0[12];
	printf("ex00\n");
	printf("%s", ft_strcpy(dest0, source));
	NEWLINE;
	NEWLINE;

	char dest1[12];
	printf("ex01\n");
	printf("hello == %s", ft_strncpy(dest1, source, 5));
	NEWLINE;
	NEWLINE;

	char test0[] = "hello\0";
	char test1[] = "hello!\0";
	printf("ex02\n");
	printf("%s: %s\n", test0, ft_str_is_alpha(test0) ? "alphabets" : "others");
	printf("%s: %s\n", test1, ft_str_is_alpha(test1) ? "alphabets" : "others");
	NEWLINE;

	char test2[] = "12345\0";
	char test3[] = "12345!\0";
	printf("ex03\n");
	printf("%s: %s\n", test2, ft_str_is_numeric(test2) ? "numeric" : "others");
	printf("%s: %s\n", test3, ft_str_is_numeric(test3) ? "numeric" : "others");
	NEWLINE;

	char test4[] = "abcde\0";
	char test5[] = "abcde!\0";
	printf("ex04\n");
	printf("%s: %s\n", test4, ft_str_is_lowercase(test4) ? "lowercase" : "others");
	printf("%s: %s\n", test5, ft_str_is_lowercase(test5) ? "lowercase" : "others");
	NEWLINE;

	char test6[] = "ABCDE\0";
	char test7[] = "ABCDE!\0";
	printf("ex05\n");
	printf("%s: %s\n", test6, ft_str_is_uppercase(test6) ? "uppercase" : "others");
	printf("%s: %s\n", test7, ft_str_is_uppercase(test7) ? "uppercase" : "others");
	NEWLINE;

	char test8[] = "!@#$%^&*\0";
	char test9[] = "\t\0";
	printf("ex06\n");
	printf("%s: %s\n", test8, ft_str_is_printable(test8) ? "printable" : "others");
	printf("%s: %s\n", test9, ft_str_is_printable(test9) ? "printable" : "others");
	NEWLINE;

	printf("ex07\n");
	printf("%s", ft_strupcase(dest0));
	NEWLINE;
	NEWLINE;

	printf("ex08\n");
	printf("%s", ft_strlowcase(dest0));
	NEWLINE;
	NEWLINE;

	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("ex09\n");
	printf("%s", ft_strcapitalize(test));
	NEWLINE;
	NEWLINE;

	char buffer[5];
	char text[] = "hello world";
	printf("ex10\n");
	printf("\"hell(result: %s)\" originally had 11(result: %u) characters", buffer, ft_strlcpy(buffer, text, 5));
	NEWLINE;
	NEWLINE;

	printf("ex11\n");
	ft_putstr_non_printable("Coucouåtu vas bien ?");
	NEWLINE;
	NEWLINE;
	/*
	char last[] = "Bonjour les aminches\t\t\tc  est fou\ttout\tce qu on ";
	printf("ex12\n");
	ft_print_memory((void *)last, (unsigned int)strlen(last));
	NEWLINE;
	NEWLINE;
	*/
}
