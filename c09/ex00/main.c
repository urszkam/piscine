#include <stdio.h>

void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
void ft_swap(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 20;

    ft_putchar('A');
    ft_putchar('\n');

    ft_putstr("Hello libft\n");

    printf("strlen: %d\n", ft_strlen("abc"));
    printf("strcmp same: %d\n", ft_strcmp("abc", "abc"));
    printf("strcmp diff: %d\n", ft_strcmp("abc", "abd"));

    ft_swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}
