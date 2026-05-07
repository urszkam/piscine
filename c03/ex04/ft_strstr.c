unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
	if (!s1[i] || s1[i] != s2[i])
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	len = ft_strlen(to_find);
	i = 0;
	while (*str)
	{
		if (ft_strncmp(str, to_find, len) == 0)
			return (str);
		str++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
    char *str = "Hello World Blah Blah";
    char *to_find = "World";
    printf("%s|\n", ft_strstr(str, to_find));
    printf("%s|", strstr(str, to_find));
    return (0);
}
