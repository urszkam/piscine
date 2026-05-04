#include <unistd.h>

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (*str)
    {
        len++;
        str++;
    }
    return (len);
}
#include <stdio.h>
int main(void)
{
    char *str = "";
    int len = ft_strlen(str);
    printf("len = %d", len);
}