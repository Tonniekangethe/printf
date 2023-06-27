#include "main.h"

/**
 * print_char - a function that prints out a character
 * @index: parameter
 *
 * Return: 1 if successful
 */
int print_char(va_list index)
{
	char c;

	c = va_arg(index, int);
	_putchar(c);
	return (1);
}
