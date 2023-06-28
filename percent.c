#include "main.h"
#include <unistd.h>

/**
 * print_cent - print the percentage sign
 *
 * Return: 1
 */
int print_cent(void)
{
	write(1, "%", 1);
	return (1);
}
