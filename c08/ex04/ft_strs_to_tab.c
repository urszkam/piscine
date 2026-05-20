#include "ft_stock_str.h"
#include <stdlib.h>

static int	_ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*_ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	len = _ft_strlen(src);
	dst = (char *)malloc(len * sizeof(char) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

static void	_ft_free_arr(t_stock_str *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr[i].copy);
		i++;
	}
	free(arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = _ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = _ft_strdup(av[i]);
		if (!arr[i].copy)
		{
			_ft_free_arr(arr, i);
			return (NULL);
		}
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
