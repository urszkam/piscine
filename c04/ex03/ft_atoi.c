int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

char	*ft_skip_signs(char *str, int *sign)
{
	*sign = 1;	
	while (*str == '+' || *str == '-')
        {
                if (*str == '-')
                        *sign *= -1;
                str++;
        }
	return (str);
}

int	ft_get_digit(char c)
{
	return (c - '0');
}

int	ft_atoi(char *str)
{
	long	num;
	int	sign;

	while (ft_isspace(*str))
		str++;
	str = ft_skip_signs(str, &sign);
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + ft_get_digit(*str);
		str++;
	}
	return ((int) (num * sign));
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int num = ft_atoi(argv[1]);
		printf("%d", num);
	}
}
