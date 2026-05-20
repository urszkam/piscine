#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	num;

	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num < 10)
		ft_putchar('0' + num % 10);
	else
	{
		ft_putnbr(num / 10);
		ft_putchar('0' + num % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		write(1, par->str, par->size);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		write(1, par->copy, par->size);
		write(1, "\n", 1);
		par++;
	}
}
