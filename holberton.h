#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct prn - structure
 *
 * @c: The operator
 * @f: The function associated
 */

typedef struct prn
{
	char *c;
	int (*f)(va_list);
} prn_t;

int _printf(const char *format, ...);
int _write(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int print_unsignedint(va_list my_list);
int myaux(const char *format, prn_t _print[], va_list my_list);

int print_number(va_list my_list);
int print_unsignedNumber(unsigned int n);
int c_binary(unsigned int n);
int print_binary(va_list list);
int c_octal(unsigned int n);
int print_octal(va_list list);
int c_hex(unsigned int n);
int print_hex_low(va_list list);


#endif
