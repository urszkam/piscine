#include <unistd.h>

int     ft_isspace(char c)
{
        return ((c >= 9 && c <= 13) || c == ' ');
}

int	check_base(char *base, int *size)
{
	int	i;
	int	j;

	i = 0;
	*size = 0;
	while (base[*size])
                (*size)++;
	if (*size < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || ft_isspace(base[i]))
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

int	isbase(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int	get_idx(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		size;
	int		sign;
	long	num;

	num = 0;
	sign = 1;
	if (check_base(base, &size))
	{
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
	}
	return ((int) (num * sign));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		size_to;
	int		decimal;
	char	*dst;

	decimal = ft_atoi_base(nbr, base_from);
	if (check_base(base_to, &size_to))
	{
		

	}
	return((int)(num * sign))
}
i
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	}
	return (0);
}

