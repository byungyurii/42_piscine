#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void 	ft_putnbr(int nb);
void	ft_print_combn(int n);

int main(void)
{
	char lf = '\n';
	write(1, "----------ex00----------", 24);
	write(1, &lf, 1);
	ft_putchar('c');

    write(1, &lf, 1);
	write(1, "----------ex01----------", 24);
	write(1, &lf, 1);
	ft_print_alphabet();

    write(1, &lf, 1);
	write(1, "----------ex02----------", 24);
	write(1, &lf, 1);
	ft_print_reverse_alphabet();

	write(1, &lf, 1);
	write(1, "----------ex03----------", 24);
	write(1, &lf, 1);
	ft_print_numbers();

	write(1, &lf, 1);
	write(1, "----------ex04----------", 24);
	write(1, &lf, 1);
	ft_is_negative(-1);
	write(1, " ", 1);
	ft_is_negative(28117);

	write(1, &lf, 1);
	write(1, "----------ex05----------", 24);
	write(1, &lf, 1);
	ft_print_comb();

	write(1, &lf, 1);
	write(1, "----------ex06----------", 24);
	write(1, &lf, 1);
	ft_print_comb2();

	write(1, &lf, 1);
	write(1, "----------ex07----------", 24);
	write(1, &lf, 1);
	ft_putnbr(-24);
	write(1, " ", 1);
	ft_putnbr(-2147483648);
	write(1, " ", 1);
	ft_putnbr(23452);

	write(1, &lf, 1);
	write(1, "----------ex08----------", 24);
	write(1, &lf, 1);
	ft_print_combn(5);

	return 0;
}
