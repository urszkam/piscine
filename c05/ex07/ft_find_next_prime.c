int	ft_is_prime(int nb)
{
	int	div;

	if (nb % 2 == 0)
		return (0);
	div = 3;
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
        if (nb <= 2)
                return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);

}

#include <stdio.h>
#include <stdlib.h>
int main(int i, char **v)
{
        if (i > 1)
                printf("%d\n", ft_find_next_prime(atoi(v[1])));
}

