#include "main.h"

/**
 * print_int - a function tha prints the integer
 * @index: parameter
 *
 * Retern: int
 */
int print_int(va_list index)
{
	int i;

	i = print_number(index);
	return (i);
}
