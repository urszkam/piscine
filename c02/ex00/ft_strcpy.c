char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = -1;
    while (src[++i])
        dest[i] = src[i];
    
    dest[i] = '\0';
    return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char *src = "Hello";
    char dst[6];
    printf("%s\n", ft_strcpy(dst, src));
    // printf("%s\n", strcpy(dst, src));

    return 0;
} */