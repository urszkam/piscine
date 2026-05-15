#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	tot_size(int size, char **strs, char *sep)
{
	int	i;

	if (size == 0)
		return (0);
	i = 0;
	while (i < size)
		total_size += ft_strlen(strs[i++]);
	total_size += ft_strlen(sep) * (size - 1);
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dst;
	int		i;
	int		j;

	dst = (char *)malloc(sizeof(char) * (tot_size(size, strs, sep) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		while (*strs[i])
		{
			dst[j++] = *strs[i];
			**strs++;
		}
		i++;
	}
	dst[j] = 0;
	return (dst);
}
