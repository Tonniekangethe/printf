#include "main.h"

/**
 * print_number - a unction that prints out a number
 * @index: parameter
 *
 * Return: the length
 */
int print_number(va_list index)
{
	int n;
	int check = 1;
	int len = 0;
	int num;

	n = va_arg(index, int);
	/* check if the number is less than 0*/
	if (n < 0)
	{
		len = len + _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	/* check if the number is greater than 9*/
	while (num / check > 9)
		check = check * 10;
	while (check != 0)
	{
		len = len + _putchar('0' + num / check);
		num %= check;
		check /= 10;
		return (len);
}
