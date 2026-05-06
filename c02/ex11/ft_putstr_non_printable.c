#include <unistd.h>

int ft_is_printable(char c)
{
    return (c >= 32 && c <= 126);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_puthex(char c)
{
    char *hex_base;
    
    hex_base = "0123456789abcdef";
    ft_putchar('\\');
    ft_putchar(hex_base[c / 16]);
	ft_putchar(hex_base[c % 16]);
}

void    ft_putstr_non_printable(char *str)
{
    int  i;

    i = 0;
    while (str[i])
    {
        if (ft_is_printable(str[i]))
            ft_putchar(str[i]);
        else
        {
            ft_puthex(str[i]); 
        }
        i++;
    }
}

#include <stdio.h>
int main(void)
{
    char src[] = "He\nllo Wo\trld\v";
    ft_putstr_non_printable(src);
    //ft_puthex(127);

    return (0);
}