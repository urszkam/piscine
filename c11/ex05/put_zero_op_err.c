#include "do_op.h"

void	put_zero_op_err(char c)
{
	write(2, "Stop: ", 6);
	if (c == '/')
		write(2, "division", 8);
	else
		write(2, "modulo", 6);
	write(2, " by zero", 8);
}
