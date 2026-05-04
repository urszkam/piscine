#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int tmp;
    int left;
    int right;
    
    left = 0;
    right = size - 1;
    while (left < right)
    {
        tmp = tab[left];
        tab[left++] = tab[right];
        tab[right--] = tmp;
    }
}

#include <stdio.h>
int main(void)
{
    int tab[6] = {1,2,3,4,5,6};
    ft_rev_int_tab(tab, 6);
    for (int i = 0; i < 6; i++)
        printf("%d", tab[i]);
}