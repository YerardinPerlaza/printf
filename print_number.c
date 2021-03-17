#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_number - check the code for Holberton School students.
 *
 *@n: int
 *
 * Return: Always 0.
 */
int print_number(int n)
{
	int l = 0;
	unsigned int num, digit, i, l_num;

	l_num = n;
	if (n < 0)
	{
		l++;
		l_num = l_num * -1;
		_write('-');
	}
	if (l_num == 0)
	{
		l++;
		_write('0');
		return (l);
	}
	i = 1;
	while (((l_num / i) > 9))
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = l_num / i;
		digit = num % 10;
		l++;
		_write(digit + '0');
		i = (i / 10);
	}
	return (l);
}
