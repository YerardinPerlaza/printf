#include "holberton.h"

/**
 * c_binary - Entry point
 *@n: unsigned int
 * Return: Always 0 (Success)
 */
int c_binary(unsigned int n)
{
	int binary[32] = {0};
	int i = 0, j, l = 0, bin;

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		bin = binary[j];
		l += _write(bin + '0');
	}

	return (l);

}
/**
 * print_binary - Entry point
 *@list: va_list
 * Return: Always 0 (Success)
 */
int print_binary(va_list list)
{
	int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		_write('0');
	if (num < 0)
		return (-1);
	return (c_binary(num));
}
