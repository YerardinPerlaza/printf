#include "holberton.h"

void print_char(va_list list);
void print_string(va_list list);
void print_percent(void);
void print_integer(va_list list);

/**
 * print_all - check the code for Holberton School students.
 *@format: list of types of arguments
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
	prn_t _print[] = {
		{'c', print_char},
		{'s', print_string},
		/* {'%', print_percent},*/
		{'d', print_integer},
		{'i', print_integer},
		{'\0', '\0'}
	};
	va_list my_list;
	int i = 0, j = 0;

	va_start(my_list, format);

	while (format != '\0' && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (_print[j].prn != '\0')
			{
				if (_print[j].prn == format[i + 1])
					_print[j].f(my_list);
				j++;
			}
		}
		i++;
	}

	va_end(my_list);
	return (0);
}
