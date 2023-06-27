#include <stdarg.h>
#include "main.h"
#include <stddef.h>


int _printf(const char *format, ...)
{
	int printed_char;
	va_list index;

	convt_t func[] =
	{
		{"c", print_char},
		{"d", print_int},
		{"s", print_string},
		{"%", print_cent},
		{"i", print_int},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}
	va_start(index, format);
	printed_char = parser_file(format, func, index);

	va_end(index);
	return (printed_char);
}
