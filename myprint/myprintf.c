#include "holberton.h"

int print_char(va_list list);
int print_string(va_list list);
int print_percent(void);
int print_integer(va_list list);

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

	_print = 0;
	while (format != '\0' && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (_print[j].prn != '\0')
			{
				if (_print[j].prn == format[i + 1])
				{
					r = _print[j].f(my_list);
					if (r == -1)
						return (-1);
					_print += r;
					break;
				}
				j++;
			}
			i++;
			if (_print[j].prn == NULL && format [i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write(format[i]);
					_write(format[i + 1]);
					_print = _print + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_write(format[i]);
			_print++;
		}
	}

	va_end(my_list);
	return (_print);
}
