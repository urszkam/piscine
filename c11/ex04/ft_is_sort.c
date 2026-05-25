#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	idx;

	idx = 0;
	while (idx < length - 1)
	{
		if (f(tab[idx], tab[idx + 1]) > 0)
			return (0);
		idx++;
	}
	return (1);
}

int	cmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	sorted[] = {1, 2, 3, 4, 5};
	int	unsorted[] = {1, 3, 2, 4, 5};

	printf("%d\n", ft_is_sort(sorted, 5, &cmp));
	printf("%d\n", ft_is_sort(unsorted, 5, &cmp));
	return (0);
}
