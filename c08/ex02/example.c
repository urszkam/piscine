#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>
int main(int c, char** v)
{
	(void) c;
	printf("%d\n", ABS(atoi(v[1])));
}
