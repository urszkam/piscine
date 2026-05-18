#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
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
