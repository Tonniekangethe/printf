#include "main.h"
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int i = 0, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
	}

	len = _strlen(s);
	while (i < len)
	{
		_putchar(s[i]);
		i++;
	}
	return (len);
}
