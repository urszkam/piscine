#include <unistd.h>

void ft_putnumber(char c1, char c2, char c3, int is_end)
{
    char number[3];
    
    number[0] = c1;
    number[1] = c2;
    number[2] = c3;
    write(1, number, 3);
    if (!is_end)
        write(1, ", ", 2);
}

void ft_print_comb(void)
{
    char hundreds;
    char tens;
    char ones;
    int is_end;
    
    is_end = 0;
    hundreds = '0';
    while (hundreds <= '7')
    {
        tens = hundreds + 1;
        while (tens <= '8')
        {
            ones = tens + 1;
            while (ones <= '9')
            {
                if (hundreds == '7' && tens == '8' && ones == '9')
                    is_end = 1;
                ft_putnumber(hundreds, tens, ones++, is_end);
            }
            tens++;
        }
        hundreds++;
    }
    
}

int main()
{
    ft_print_comb();

    return 0;
}