#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int retVal1 = 0, retVal2 = 0;

	retVal1 = _printf("test %s%c%%", "iksos issa muñnykeā ēngos", 'c');
	retVal2 = printf("test %s%c%%", "iksos issa muñnykeā ēngos", 'c');
	printf("\nfrom custom printf: %d from our printf: %d\n", retVal1, retVal2);
	return (0);
}
