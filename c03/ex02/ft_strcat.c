unsigned int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strcat(char *dest, char *src)
{
    unsigned int    len;
    unsigned int    i;
    
    len = ft_strlen(dest);
    i = 0;
    while (src[i])
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
    printf("%s\n", ft_strcat(dst, src));
    printf("%s", strcat(dst2, src));
    return (0);
}