#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

#include <stdio.h>
int main(void)
{
    int i = 23344;
    ft_ft(&i);
    printf("%d", i);
    return (0);
}