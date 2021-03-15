#include "holberton.h"

/**
 * myaux - Entry point
 *@format: char string
 *@_print: strcuture
 *@my_list: list
 * Return: Always 0 (Success)
 */
int myaux(const char *format, prn_t _print[], va_list my_list)
{
	int i, j, printed_c;
	char buffer[1024] = {0};

	printed_c = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		buffer[i] = format[i];
		if (format[i] == '%')
		{
			for (j = 0; _print[j].prn != '\0'; j++)
			{
				if (_print[j].prn[0] == format[i + 1])
				{
					buffer[i] = _print[j].f(my_list);
					if (buffer[i] == -1)
						return (-1);
					printed_c++;
					break;
				}
			}
			if (_print[j].prn == '\0' && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write(format[i]);
					_write(format[i + 1]);
					printed_c = printed_c + 2;
				}
				else
					return (-1);
			}
			i++; /*updating to skip the format*/
		}
		else
		{
			_write(buffer[i]);
			printed_c++;
		}
	}
	return (printed_c);
}
