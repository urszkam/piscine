OUT_NAME = ft_display_file
FILES = main.c ft_putchar.c ft_display_file.c
OBJS = ${FILES:.c=.o}
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${OUT_NAME}

%.o: %.c
	cc -c ${CFLAGS} $^ -o $@
${OUT_NAME}: ${OBJS}
	cc ${OBJS} -o ${OUT_NAME}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${OUT_NAME}
re: fclean all

.PHONY: all clean fclean re