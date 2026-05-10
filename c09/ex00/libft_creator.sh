#!/bin/bash
LIB_NAME="libft.a"
FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJS="ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o"

cc -c $FILES
ar rcs $LIB_NAME $OBJS
rm $OBJS
