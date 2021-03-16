#include "holberton.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int c_octal(unsigned int n)
{
	int octal[100] = {0};
	int i = 0, j, l = 0, oc;

	while (n > 0)
	{
		octal[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		oc = octal[j];
		l += _write(oc + '0');
	}
	return (l);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_octal(va_list list)
{
	int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		_write('0');
	if (num < 0)
		return (-1);
	return (c_octal(num));
}
