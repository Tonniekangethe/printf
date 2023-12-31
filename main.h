#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i)
 * @f: type pointer to function for the conversion specifier.
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int print_number(va_list index);
int _strlen(char *s);
int _strlenc(const char *s);
int print_cent(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int prt_sting(va_list val);
int print_unsigned_number(int n);

#endif
