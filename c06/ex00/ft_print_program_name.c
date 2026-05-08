#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
	(void) argc;
	return (0);
}
