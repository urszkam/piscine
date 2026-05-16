#include <unistd.h>

int	ft_display_file(char *file_name);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (!ft_display_file(argv[1]))
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}
