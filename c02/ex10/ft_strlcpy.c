unsigned int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
    if (size == 0)
        return (len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

#include <stdio.h>
int main(void)
{
    char src[] = "Hello World";
    char dest[8];
    unsigned int result;
    result = ft_strlcpy(dest, src, 8);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("return: %u\n", result);

    return (0);
}