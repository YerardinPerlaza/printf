#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct prn
{
	char *prn;
	int (*f)(va_list);
} prn_t;

int _printf(const char *format, ...);
int _write(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(void);
int print_integer(va_list list);
int print_unsignedint(va_list list);
int myaux(const char *format, prn_t _print[], va_list my_list);
int print_number(va_list my_list);
int print_unsignednumber(va_list my_list);

#endif