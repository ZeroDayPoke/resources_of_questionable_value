#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formatted string
 *
 * @format: A string containing all the desired characters
 *
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int char_chars = 0, i = 0, p;
	team_t f_list[] = {{"c", print_char}, {"s", print_string},
		{"%", print_percent}, {"d", print_integer},
		{"i", print_integer}};
	va_list arg_list;

	if (format == NULL || (format[i] == '%' && !format[i + 1]))
		return (-1);
	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				char_chars += print_percent(arg_list);
			else
			{
				for (p = 0; p < 5; p++)
					if (f_list[p].op[0] == format[i + 1])
						char_chars += f_list[p].f(arg_list);
				if ((format[i + 1] != 'd' && format[i + 1] != 'c'
				&& format[i + 1] != 'i' && format[i + 1] != 's' && format[i + 1] != '%'))
				{
					char_chars += _write_char(format[i]);
					char_chars += _write_char(format[i + 1]);
				}
			}
			i++;
		}
		else
			char_chars += _write_char(format[i]);
		i++;
	}
	va_end(arg_list);
	return (char_chars);
}
