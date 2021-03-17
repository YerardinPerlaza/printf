#include "holberton.h"

/**
 * print_char - Entry point
 *@list: va_list
 * Return: Always 0 (Success)
 */
int print_char(va_list list)
{
	_write(va_arg(list, int));
	return (1);
}

/**
 * print_string - Entry point
 *@list: va_list
 * Return: Always 0 (Success)
 */
int print_string(va_list list)
{
	char *s = va_arg(list, char*);
	int i;

	if (s == NULL)
	{
		s = "(null)";
		i = 6;
	}
	for (i = 0; s[i] != '\0'; i++)
		_write(s[i]);
	return (i);
}

/**
 * print_percent - Entry point
 *@list: va_list
 * Return: Always 0 (Success)
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write('%');
	return (1);
}

/**
 * print_integer - Entry point
 *@list: va_list
 * Return: Always 0 (Success)
 */
int print_integer(va_list list)
{
	int num_l;

	num_l = print_number(list);
	return (num_l);
}
/**
 * print_unsignedint - Entry point
 *@list: va_list
 * Return: Always 0 (Success)
 */
int print_unsignedint(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (print_unsignedNumber(num));
	if (num < 1)
		return (-1);
	return (print_unsignedNumber(num));
}
