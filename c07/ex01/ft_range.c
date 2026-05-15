#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (size--)
		arr[size] = --max;
	return (arr);
}

#include <stdio.h>
int main()
{
	int max = -3;
	int min = -6;
	int *arr = ft_range(min, max);
	for (int i = 0; min < max; min++, i++)
		printf("%d\n", arr[i]);
}
