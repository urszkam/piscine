#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

#include <stdio.h>
int main(void)
{
    ft_putstr("Hello");
}