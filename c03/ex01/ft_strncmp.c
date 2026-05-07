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

#include <string.h>
#include <stdio.h>
int main(void)
{
    printf("%d", ft_strncmp("2ą35", "234", 3));
    printf("%d", strncmp("2ą35", "234", 3));
    return (0);
}
