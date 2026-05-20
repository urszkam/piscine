#include <stdlib.h>
#include <stdio.h>

int	_ft_strncmp(char *s1, char *s2, int size)
{
	int	i;

	i = 0;
	while (i < size && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	_ft_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	_ft_calc_arr_len(char *str, char *sep)
{
	int	i;
	int	word_counter;

	i = 0;
	word_counter = 0;
	while (str[i])
	{
		if ((i == 0 && !_ft_is_sep(str[i], sep))
			|| (i > 0 && _ft_is_sep(str[i - 1], sep)
				&& !_ft_is_sep(str[i], sep)))
			word_counter++;
		i++;
	}
	return (word_counter);
}

char	*_ft_strndup(char *src, int n)
{
	char	*dst;
	int		i;

	dst = (char *)malloc((n + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		arr_size;
	int		i;
	int		word_len;

	arr_size = _ft_calc_arr_len(str, charset);
	arr = (char **)malloc(sizeof(char *) * (arr_size + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*str && i < arr_size)
	{
		while (*str && _ft_is_sep(*str, charset))
			str++;
		word_len = 0;
		while (str[word_len] && !_ft_is_sep(str[word_len], charset))
			word_len++;
		if (word_len > 0)
		{
			arr[i] = _ft_strndup(str, word_len);
			if (!arr[i])
				return (NULL);
			i++;
			str += word_len;
		}
	}
	arr[i] = NULL;
	return (arr);
}
/*
int	main(int argc, char **argv)
{
	char	**result;
	int	i;

	if (argc >= 3)
	{
		result = ft_split(argv[1], argv[2]);
		i = 0;
		printf("[\n");
		while (result[i])
		{
			printf("'%s',\n", result[i]);
			i++;
		}
		printf("]\n");
	}
	return (0);
}
*/
