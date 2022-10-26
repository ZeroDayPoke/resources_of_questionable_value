#include <stdio.h>
#include <stdarg.h>
#include "header.h"

/**
 * print_all - function that prints anything
 * @format: array of possible data types passed to function
 */

void print_all(const char * const format, ...)
{
	va_list betty;
	char *delimiter = "";
	unsigned int x = 0;
	char *stringHere;

	va_start(betty, format);
	while (format && format[x])
	{
		if (format[x] == 's' || 'i' || 'c' || 'f')
			printf("%s", delimiter);
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(betty, int));
				delimiter = ", ";
				break;
			case 'i':
				printf("%d", va_arg(betty, int));
				delimiter = ", ";
				break;
			case 'f':
				printf("%f", va_arg(betty, double));
				delimiter = ", ";
				break;
			case 's':
				stringHere = va_arg(betty, char *);
				if (stringHere == NULL)
				{
					printf("(nil)");
					delimiter = ", ";
					break;
				}
				printf("%s", stringHere);
				delimiter = ", ";
				break;
			default : delimiter = "";
		}
		x++;
	}
	va_end(betty);
	printf("\n");
}
