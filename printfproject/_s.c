#include "main.h"

/**
 * _puts - prints string to std out
 * @str: string input
 * Return: void
 */
void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
