char    *ft_strupcase(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i])
    {
        c = str[i];
        if (c >= 'a' && c <= 'z')
            str[i] = c - 32;
        i++;
    }
    return str;
}

#include <stdio.h>
int main()
{
    char src[] = "vdfb_64O\tAdX";
    printf("%s\n", ft_strupcase(src));
    return 0;
}