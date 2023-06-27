#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct convt
{
        char *system;
        int (*f)(va_list);
}convt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list index);
int print_number(va_list);
int print_unsigned_number(unsigned int n);
int print_cent(va_list);
int print_int(va_list);
int parser_file(const char *format, convt_t funct[], va_list index);

#endif
