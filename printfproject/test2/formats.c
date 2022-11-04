#include "main.h"
/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list list)
{
	int c;

	c = va_arg(list, int);

	/*_write_char(va_arg(list, int));*/
	_write_char(c);

	return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);

	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');

	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_integer(list);

	return (num_length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the arguments
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	int num_length;

	num_length = print_integer(list);

	return (num_length);
}
