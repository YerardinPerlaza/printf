#include "holberton.h"

/**
 * c_hex - Entry point
 *@n: unsigned int
 * Return: Always 0 (Success)
 */
int c_hex(unsigned int n)
{
	char hex[100] = {0};
	int i = 0, j, l = 0, t, h;

	while (n != 0)
	{
		t = 0;
		t = n % 16;

		if (t < 10)
		{
			hex[i] = (char)(t + 48);
			i++;
		}
		else
		{
			hex[i] = (char)(t + 55);
			i++;
		}
		n = n / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		h = hex[j];
		l += _write(h);
	}
	return (l);
}
/**
 * print_hex_low - Entry point
 *@list: va_list
 * Return: Always 0 (Success)
 */
int print_hex_low(va_list list)
{
	int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		_write('0');
	if (num < 0)
		return (-1);
	return (c_hex(num));
}
