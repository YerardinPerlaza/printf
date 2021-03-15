#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_number - check the code for Holberton School students.
 *
 *@my_list: list
 *
 * Return: Always 0.
 */
int print_number(va_list my_list)
{
	int n, digit = 10;
	int l = 0;
	int temp;

	n = va_arg(my_list, int);
	temp = n;

	if (n < 0)
		temp = (-n);

	if (n == 0)
		l += _write('0');
	else
	{
		if (n < 0)
		{
			n = (-n);
			l += _write('-');
			n = n * 100;
		}
		while (n > 0)
		{
			digit = digit * 10;
			n = n / 100;
		}
		n = digit;
		while (n > 0)
		{
			if (!(n == digit && ((temp / n) % 10) == 0))
				l += _write('0' + ((temp / n) % 10));
			n = n / 10;
		}
	}
	return (l);
}
