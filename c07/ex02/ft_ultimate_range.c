#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}
/*
#include <stdio.h>
int main()
{
        int max = -3;
        int min = -6;
	int *arr;
        ft_ultimate_range(&arr, min, max);
        for (int i = 0; min < max; min++, i++)
                printf("%d\n", arr[i]);
}
*/
