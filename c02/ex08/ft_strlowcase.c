char    *ft_strlowcase(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i])
    {
        c = str[i];
        if (c >= 'A' && c <= 'Z')
            str[i] = c + 32;
        i++;
    }
    return str;
}

#include <stdio.h>
int main()
{
    char src[] = "vBDS_64O\tAdX";
    printf("%s\n", ft_strlowcase(src));
    return 0;
}