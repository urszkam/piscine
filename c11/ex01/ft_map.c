#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tab_dest;
	int	idx;

	idx = 0;
	tab_dest = (int *)malloc(length * sizeof(int));
	if (!tab_dest)
		return (0);
	while (idx < length)
	{
		tab_dest[idx] = f(tab[idx]);
		idx++;
	}
	return (tab_dest);
}

int	add_one(int n)
{
	return (n + 1);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	*result;
	int	i;

	result = ft_map(tab, 5, &add_one);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}
