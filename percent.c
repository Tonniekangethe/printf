#include "main.h"
#include <unistd.h>

/**
 * print_cent - print the percentage sign
 * @index: parameter
 *
 * Return: 1
 */
int print_cent(__attribute__((unused)) va_list index)
{
	write(1, "%", 1);
	return (1);
}
