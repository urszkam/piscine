int ft_is_alpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (!ft_is_alpha(str[i]))
            return (0);
        i++;
    }
    return (1);
}

#include <stdio.h>
int main()
{
    char *src = "Hello";
    printf("%d\n", ft_str_is_alpha(src));
    return 0;
}