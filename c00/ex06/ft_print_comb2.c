#include <unistd.h>

void ft_putnumber(int num)
{
	char	tens;
	char	ones;

	tens = '0' + num / 10;
	ones = '0' + num % 10;
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void ft_print_comb2(void)
{
    int num1;
    int num2;
    
    num1 = 0;
    while (num1 <= 98)
    {
        num2 = num1 + 1;
        while (num2 <= 99)
        {
            ft_putnumber(num1);
            write(1, " ", 1);
            ft_putnumber(num2);
            if (!(num1 == 98 && num2 == 99))
                write(1, ", ", 2);
            num2++;
        }
        num1++;
    }
}

int main()
{
    ft_print_comb2();

    return 0;
}