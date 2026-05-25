#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	counter;
	int	idx;

	counter = 0;
	idx = 0;
	while (idx < length)
	{
		if (f(tab[idx]))
			counter++;
		idx++;
	}
	return (counter);
}

int	contains_x(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'x')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*tab[] = {"abc", "xyz", "42", "x", "test"};

	printf("%d\n", ft_count_if(tab, 5, &contains_x));
	return (0);
}
