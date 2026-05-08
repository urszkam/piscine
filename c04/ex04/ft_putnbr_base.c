#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	if (size < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;	
	}
	return (1);
}

void	ft_recursive_putnbr_base(long nbr, char *base, int size)
{
	if (nbr < size)
		ft_putchar(base[nbr % size]);
	else
	{
		ft_recursive_putnbr_base(nbr / size, base, size);
		ft_putchar(base[nbr % size]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	num;

	size = ft_strlen(base);
	if (check_base(base, size))
	{
		num = nbr;
		if (num < 0)
		{
			ft_putchar('-');
			num = -num;
		}
		ft_recursive_putnbr_base(num, base, size);
	}
}

#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int nbr = atoi(argv[1]);
		ft_putnbr_base(nbr, argv[2]);
	}
	return (0);
}
