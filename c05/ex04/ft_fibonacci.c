int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return index;
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", ft_fibonacci(atoi(argv[1])));
	}
}
