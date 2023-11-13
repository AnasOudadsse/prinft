#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/*0-printf.c */
int _printf(const char *format, ...);
/*_putchar.c */
int _putchar(char c);
/* printf_char */
int printf_char(va_list val);
/*this one for printing string in 0-print_str.c*/
int print_string(char *str);

#endif
