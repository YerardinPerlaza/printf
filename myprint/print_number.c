#include "holberton.h"

int print_number(va_list my_list)
{
	int n, digit;

	n = va_arg(my_list, int);
	while (n != 0)
	{
		digit = n % 10;
		n = n / 10;
		_write(digit);
	}
	return (0);
}
