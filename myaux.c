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
	int i, j, buf, printed_c;

	printed_c = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; _print[j].c != '\0'; j++)
			{
				if (format[i + 1] == *(_print[j]).c)
				{
					buf = _print[j].f(my_list);
					if (buf == -1)
						return (-1);
					printed_c += buf;
					break;
				}
			}
			if ((_print[j].c == '\0' && format[i + 1] != ' ') ||
(_print[j].c == '\0' && format[i + 1] == ' '))
			{
				if (format[i + 1] != '\0')
				{
					_write(format[i]);
					_write(format[i + 1]);
					printed_c = printed_c + 2;
				}
			}
			i++; /*updating to skip the format*/
		}
		else
		{
			_write(format[i]);
			printed_c++;
		}
	}
	return (printed_c);
}
