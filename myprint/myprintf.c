#include "holberton.h"

/**
 * print_all - check the code for Holberton School students.
 *@format: list of types of arguments
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
	int printed_c;

	prn_t _print[] = {
		{"c", print_char},
		{"s", print_string},
		/* {'%', print_percent},*/
		{"d", print_integer},
		{"i", print_integer},
		{"u", print_unsignedint},
		{'\0', '\0'}
	};
	va_list my_list;

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	printed_c = myaux(format, _print, my_list);
	va_end(my_list);

	return (printed_c);
}
