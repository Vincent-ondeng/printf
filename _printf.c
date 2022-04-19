#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: format string
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	int count = 0;
	spic_t spic[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_per},
		{"d", print_di},
		{"i", print_di},
		{NULL, NULL}
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
				i++;
			while (spic[j].dt != NULL)
			{
				if (*spic[j].dt == format[i])
					count += spic[j].f(arg);
				j++;
			}
			i++;
		}
		_putchar(format[i]);
		count++;
		i++;
		j = 0
	}
	va_end(arg);
	return (count);
}
