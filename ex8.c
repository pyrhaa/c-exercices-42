#include <unistd.h>
#include <stdio. h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_char_number(int nb)
{
	ft_putchar(nb / 10 + 48);
	ft_putchar(nb % 10 + 48);
}

void ft_print_combn(int n)
{
	int a;
	int b;
	int tab[10];

}

int main()
{
    ft_print_combn();
    return 0;
}