#include "main.h"

/**
 * print_string - a function that prints a string
 * @index: parameter
 *
 * Return: the variable (i)
 */
int print_string(va_list index)
{
	int i = 0;
	const char *s;

	s = va_arg(index, const char *);
	if (s == NULL)
		s = "(nil)";
	for (; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
