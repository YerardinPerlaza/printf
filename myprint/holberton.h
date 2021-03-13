#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct prn
{
	char prn;
	void (*f)(va_list);
} prn_t;

int _printf(const char *format, ...);
int _write(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(void);
int print_integer(va_list list);


#endif
