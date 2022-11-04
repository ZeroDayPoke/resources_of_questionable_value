#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct team - defines a structure for symbols and functions
 * @op: The operator
 * @f: The function associated
 */
struct team
{
	char *op;
	int (*f)(va_list);
};
typedef struct team team_t;

/*Main functions*/
int _printf(const char *format, ...);
int _write_char(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int unsigned_integer(va_list list);

#endif
