int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 1)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
int main(int i, char **v)
{
        if (i > 1)
                printf("%d\n", ft_sqrt(atoi(v[1])));
}
