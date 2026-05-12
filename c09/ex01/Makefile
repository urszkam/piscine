LIB_NAME = libft.a
DIR = ./srcs/
HEADER_DIR = ./includes/
FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = ${addprefix ${DIR}, ${FILES}}
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I ${HEADER_DIR}
RM = rm -f

all: ${LIB_NAME}

${LIB_NAME}: ${OBJS}
	ar rcs ${LIB_NAME} $^
%.o: %.c
	cc -c ${CFLAGS} ${CPPFLAGS} $^ -o $@
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${LIB_NAME}
re: fclean all

.PHONY: all clean fclean re
