unsigned int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    len;
    unsigned int    i;
    
    len = ft_strlen(dest);
    i = 0;
    while (i < nb && src[i])
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
    char dst[20] = "Hello ";
    char dst2[20] = "Hello ";
    char src[] = "World";
    printf("%s|\n", ft_strncat(dst, src, 1));
    printf("%s|", strncat(dst2, src, 1));
    return (0);
}