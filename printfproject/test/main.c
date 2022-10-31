#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int retVal1 = 0, retVal2 = 0;

	retVal1 = _printf("%s", "test");
	retVal2 = printf("%s", "test");
	printf("\n%d%d\n", retVal1, retVal2);
	return (0);
}
