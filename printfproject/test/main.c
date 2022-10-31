#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int retVal1 = 0, retVal2 = 0;

	retVal1 = _printf("this thing %s is %d %c long %%%d%d%d", NULL, INT_MIN, 65, 45, 22);
	retVal2 = printf("this thing %s is %d %c long %%%d%d%d", NULL, INT_MIN, 65, 45, 22);
	printf("\nfrom custom printf: %d from our printf: %d\n", retVal1, retVal2);
	return (0);
}
