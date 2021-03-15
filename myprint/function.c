#include "holberton.h"
#include <stdio.h>

/**
 * print_char - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
int print_char(va_list list)
{
	_write(va_arg(list, int));
	return (1);
}

/**
 * print_string - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
int print_string(va_list list)
{
	char *s = va_arg(list, char*);
	int i;

	if (s == NULL)
	{
		s = "(nil)";
	}
	for (i = 0; s[i] != '\0'; i++)
		_write(s[i]);
	return (i);
}

/**
 * print_percent - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
int print_percent(void)
{
	_write('%');
	return (1);
}

/**
 * print_integer - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
int print_integer(va_list list)
{
	int num;
	num = print_number(list);
	return (num);
}

int print_unsignedint(va_list list)
{
	unsigned int num;
	num = (va_arg(list, int));
	_write(num);
	return (num);
}
