#ifndef MAINH_H
#define MAINH_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct spic - Structure for identifier types and %
 * @dt: Datatype or %
 * @f: Associated function
 */
typedef struct spic
{
	char *dt;
	int (*f)(va_list);
} spic_t;

int _putchar(char c);
int _pprintf(const char *format, ...);
int print_c(va_list);
int print_s(va_list);
int print_per(va_list);
int print_di(va_list);
#endif /*MAINH_H*/
