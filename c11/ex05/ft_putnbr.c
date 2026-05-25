#include "do_op.h"

void	ft_putnbr(int nbr)
{
	long	l_nbr;

	l_nbr = nbr;
	if (l_nbr < 0)
	{
		ft_putchar('-');
		l_nbr = -l_nbr;
	}
	if (l_nbr < 10)
		ft_putchar(l_nbr + '0');
	else
	{
		ft_putnbr(l_nbr / 10);
		ft_putchar((l_nbr % 10) + '0');
	}
}
