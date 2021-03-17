/**
 * _funcion - Helper function to print and call functions.
 * @format: String recieved.
 * @ops: special options.
 * @ap: arguments
 * Return: number of chars printed
 */

int _funcion(const char *format, pr_f ops[], va_list mylist)
{
	int printed_c = 0, i, j;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			for (j = 0; _print[j].c != NULL; j++)
			{
				if (format[i + 1] == *(_print[j].c))
				{
					printed_c = printed_c + ops[j].f(ap);
					break;
				}
			}
			if (_print[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write(format[i]);
					_write(format[i + 1]);
					printed_c += printed_c + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_write(format[i]);
			printed_c++;
		}
	}
	return (printed_c);
}
