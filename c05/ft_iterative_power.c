int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	while (--power)
		result *= nb; 
	return (result);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int res = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
		printf("%d\n", res);
	}
	return (0);
}
