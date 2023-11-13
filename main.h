#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

//_printf.c
int _printf(const char *format, ...);
/*_putchar.c */
int _putchar(char c);
/* print_c.c */
int printf_char(va_list val);
//print_s.c
int printf_string(va_list agr);
//_strlen.c
int _strlen(char *str);
int _strlenc(const char *str);
//print_%.c
int printf_37(void):
//print_int.c
int print_i(va_list args);
int print_d(va_list args);
//print_b.c
int print_b(va_list val)

#endif
