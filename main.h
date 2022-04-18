#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct directives - holds format specifiers and their functions
 * @spec: char.
 * @fspec: function pointer.
 */
typedef struct directives
{
	char spec;
	int (*fspec)(va_list, int);
} forms;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print_func(char c))(va_list, int);

#endif
