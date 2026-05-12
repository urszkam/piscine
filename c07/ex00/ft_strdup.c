#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	len = ft_strlen(src);
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

#include <stdio.h>
int main()
{
	printf("%s\n", ft_strdup("hello world"));
	return (0);
}
