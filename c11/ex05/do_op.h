#ifndef DO_OP_H

# define DO_OP_H
# include <unistd.h>

int		add(int n1, int n2);
int		subtract(int n1, int n2);
int		modulo(int n1, int n2);
int		div(int n1, int n2);
int		mul(int n1, int n2);
int		ft_atoi(char *str);

void	put_zero_op_err(char c);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);

#endif
