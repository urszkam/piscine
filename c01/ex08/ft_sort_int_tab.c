void ft_sort_int_tab(int *tab, int size)
{
    int sorted;
    int tmp;
    int idx;
    
    sorted = 0;
    while (!sorted)
    {
        sorted = 1;
        idx = 0;
        while (idx < size - 1)
        {
            if (tab[idx] > tab[idx + 1])
            {
                tmp = tab[idx];
                tab[idx] = tab[idx + 1];
                tab[idx + 1] = tmp;
                sorted = 0;
            }
            idx++;
        }
    }
}

#include <stdio.h>
int main(void)
{
    int tab[6] = {8,2,7,4,9,6};
    ft_sort_int_tab(tab, 6);
    for (int i = 0; i < 6; i++)
        printf("%d", tab[i]);
}