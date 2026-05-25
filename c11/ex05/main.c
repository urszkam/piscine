#include "do_op.h"

int	_validate_operator(char *str)
{
	char	c;

	if (str[0] && !str[1])
	{
		c = str[0];
		if (c == '/' || c == '*' || c == '+' || c == '-' || c == '%')
			return (1);
	}
	return (0);
}

int	_do_op(int n1, char op, int n2)
{
	char	ops[5];
	int		(*funcs[5])(int, int);
	int		i;

	ops[0] = '+';
	funcs[0] = add;
	ops[1] = '-';
	funcs[1] = subtract;
	ops[2] = '*';
	funcs[2] = mul;
	ops[3] = '/';
	funcs[3] = div;
	ops[4] = '%';
	funcs[4] = modulo;
	i = 0;
	while (i < 5)
	{
		if (ops[i] == op)
			return (funcs[i](n1, n2));
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		n1;
	int		n2;
	int		res;
	char	op;

	if (argc == 4)
	{
		if (!_validate_operator(argv[2]))
			ft_putnbr(0);
		else
		{
			n1 = ft_atoi(argv[1]);
			n2 = ft_atoi(argv[3]);
			op = argv[2][0];
			if (n2 == 0 && (op == '/' || op == '%'))
				put_zero_op_err(op);
			else
			{
				res = _do_op(n1, op, n2);
				ft_putnbr(res);
			}
		}
		ft_putchar('\n');
	}
	return (0);
}
