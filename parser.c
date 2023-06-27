#include "main.h"
#include <unistd.h>

/**
 * parser_file - a function that helps the computer make sense of code
 * @format: last know argument to printf
 * @index: paramether
 * @funct: an array
 *
 * Return: standard output
 */
int parser_file(const char *format, convt_t funct[], va_list index)
{
	int i = 0, j = 0, nxt, len, val;
	int out_char = 0;

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (; funct[j].system != NULL; j++)
			{
				if (format[i + 1] == funct[j].system[0])
				{
					nxt = funct[j].f(index);
					if (nxt == -1)
						return (-1);
					out_char = out_char + nxt;
					break;
				}
			}
			i = i + 1;
		}
		if (format[i] != '%')
		{
			len = write(1, &format[i], 1);
			val += len;
			out_char++;
		}
	}
	return (out_char);
}
