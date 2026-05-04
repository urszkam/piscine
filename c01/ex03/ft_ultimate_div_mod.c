void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *a / *b;
    *b = tmp % *b;
}

#include <stdio.h>
int main(void)
{
    int a = 12;
    int b = 3;
    
    ft_ultimate_div_mod(&a, &b);
    printf("div = %d \n", a);
    printf("mod = %d", b);
    return (0);
}