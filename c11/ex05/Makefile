OUT_NAME = do-op
SRCS = ft_atoi.c ft_putnbr.c ft_putchar.c main.c operations.c put_zero_op_err.c
OBJS = ${SRCS:.c=.o}
HEADER_DIR = ./ 
CFLAGS = -Wall -Wextra -Werror

all: ${OUT_NAME}

%.o: %.c
	@cc -c ${CFLAGS} -I ${HEADER_DIR} $^ -o $@

${OUT_NAME}: ${OBJS}
	@cc ${OBJS} -o ${OUT_NAME}
clean:
	@rm -f ${OBJS}
fclean: clean
	@rm -f ${OUT_NAME}
re: fclean all

.PHONY: all clean fclean re

