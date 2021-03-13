#include "holberton.h"
#include <stdio.h>

/**
 * print_char - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
void print_char(va_list list)
{
	_write(va_arg(list, int));
}

/**
 * print_string - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
void print_string(va_list list)
{
	char *s = va_arg(list, char*);
	int i;

	if (s == NULL)
	{
		s = "(nil)";
	}
	for (i = 0; s[i] != '\0'; i++)
		_write(s[i]);
}

/**
 * print_percent - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
void print_percent(void)
{
	_write('%');
}

/**
 * print_integer - Entry point
 *@element: va_list
 * Return: Always 0 (Success)
 */
void print_integer(va_list list)
{
	_write(va_arg(list, int));
}
