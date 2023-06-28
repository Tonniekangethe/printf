#include "main.h"

/**
 * print_string - a function that prints a string
 * @val: parameter
 *
 * Return: the variable (i)
 */
int printf_string(va_list val)
{
	int i = 0;
	const char *s;

	s = va_arg(val, const char *);
	if (s == NULL)
		s = "(nil)";
	for (; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
