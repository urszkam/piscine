#include <stdlib.h>
#include <stdio.h>

int	_ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	_tot_size(int size, char **strs, char *sep)
{
	int	i;
	int	total_size;

	if (size == 0)
		return (0);
	i = 0;
	total_size = 0;
	while (i < size)
		total_size += _ft_strlen(strs[i++]);
	total_size += _ft_strlen(sep) * (size - 1);
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dst;
	int		i;
	int		j;
	int		k;

	if (size <= 0)
		size = 0;
	dst = (char *)malloc(sizeof(char) * (_tot_size(size, strs, sep) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			dst[j++] = strs[i][k++];
		k = 0;
		while (i < size - 1 && sep[k])
			dst[j++] = sep[k++];
		i++;
	}
	dst[j] = 0;
	return (dst);
}
/*
int main()
{
	char *arr[] = {"Hello", "World"};
	char *s = ft_strjoin(2, arr, "...");
	printf("%s", s);
}*/
