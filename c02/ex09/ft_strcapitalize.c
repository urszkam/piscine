int ft_is_lowercase(char c)
{
    return (c >= 'a' && c <= 'z');
}

int ft_is_uppercase(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_is_alnum(char c)
{
    return (ft_is_lowercase(c) || ft_is_uppercase(c)
        || (c >= '0' && c <= '9'));
}

char    *ft_strcapitalize(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (i == 0 || !(ft_is_alnum(str[i - 1])))
        {
            if (ft_is_lowercase(str[i]))
                str[i] = str[i] - 32;
        }
        else if (ft_is_uppercase(str[i]))
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

#include <stdio.h>
int main()
{
    char src[] = "hi, How are yOU? 42words foRty-two; fifty+and+one";
    printf("%s\n", ft_strcapitalize(src));
    return 0;
}