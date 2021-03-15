#include "holberton.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * print_number - check the code for Holberton School students.
 *
 *@n: int
 *
 * Return: Always 0.
 */
=======

>>>>>>> 1289ac6e7d9e27652a0e85cfec27d8115b63cd8d
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
