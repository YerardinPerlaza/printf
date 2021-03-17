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
	int count = 0;
	unsigned int num;
	unsigned int dig;
	unsigned int i;
	unsigned int long_num;

	long_num = n;
	if (n < 0)
	{
		count++;
		long_num = long_num * -1;
		_write('-');
	}
	if (long_num == 0)
	{
		count++;
		_write('0');
		return (count);
	}
	i = 1;
	while (((long_num / i) > 9))
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = long_num / i;
		dig = num % 10;
		count++;
		_write(dig + '0');
		i = (i / 10);
	}
	return (count);
}
