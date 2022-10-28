#include "main.h"
#include <stdio.h>

int main(void)
{
	int retval;

	retval = _printf("%%", 33, "test", 505, 'a');
	printf("%d", retval);
	return (0);
}
