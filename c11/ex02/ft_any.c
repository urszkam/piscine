#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	idx;

	idx = 0;
	while (tab[idx])
	{
		if (f(tab[idx]))
			return (1);
		idx++;
	}
	return (0);
}

int	is_null(char *str)
{
	return (str[0] == '\0');
}

int	main(void)
{
	char	*tab[] = {"abc", "", "xyz", 0};

	printf("%d\n", ft_any(tab, &is_null));
	return (0);
}
