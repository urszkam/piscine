#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_isspace(char c);
int	check_base(char *base);
int	isbase(char c, char *base);
int	get_idx(char c, char *base);

long	ft_atoi_base(char *str, char *base)
{
	int		size;
	int		sign;
	long	num;

	num = 0;
	sign = 1;
	size = ft_strlen(base);
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && isbase(*str, base))
	{
		num = num * size + get_idx(*str, base);
		str++;
	}
	return ((long)(num * sign));
}

int	ft_get_size(long nbr, int base_size)
{
	int		size;

	size = 0;
	if (nbr < 0)
		size++;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= base_size;
		size++;
	}
	return (size);
}

char	*ft_putnbr_to_str(long nbr, char *base, int base_size, int len)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = 0;
	if (nbr < 0)
	{
		dst[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		dst[0] = base[0];
	while (nbr)
	{
		dst[--len] = base[nbr % base_size];
		nbr /= base_size;
	}
	return (dst);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			size_to;
	int			str_len;
	long		decimal;

	if (!check_base(base_to) || !check_base(base_from))
		return (NULL);
	size_to = ft_strlen(base_to);
	decimal = ft_atoi_base(nbr, base_from);
	str_len = ft_get_size(decimal, size_to);
	return (ft_putnbr_to_str(decimal, base_to, size_to, str_len));
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	}
	return (0);
}
*/
