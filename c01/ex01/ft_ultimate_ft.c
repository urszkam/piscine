void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

#include <stdio.h>
int main(void)
{
    int i = 23344;
    int *ip = &i;
    int **ipp = &ip;
    int ***ippp = &ipp;
    int ****ipppp = &ippp;
    int *****ippppp = &ipppp;
    int ******ipppppp = &ippppp;
    int *******ippppppp = &ipppppp;
    int ********ipppppppp = &ippppppp;
    int *********ippppppppp = &ipppppppp;
    
    ft_ultimate_ft(ippppppppp);
    printf("%d", i);
    return (0);
}