#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c);


int	ft_display_file(char *file_name)
{
	int		fd;
	char	buff[1];

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, buff, 1) > 0)
		ft_putchar(buff[0]);
	close(fd);
	return (1);
}
