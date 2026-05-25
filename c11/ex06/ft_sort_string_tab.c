#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	idx;
	int	is_sorted;

	is_sorted = 0;
	while (!is_sorted)
	{
		is_sorted = 1;
		idx = 0;
		while (tab[idx + 1])
		{
			if (ft_strcmp(tab[idx], tab[idx + 1]) > 0)
			{
				ft_swap(&tab[idx], &tab[idx + 1]);
				is_sorted = 0;
			}
			idx++;
		}
	}
}

int	main(void)
{
	char	*tab[] = {"orange", "apple", "banana", 0};
	int		i;

	ft_sort_string_tab(tab);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
