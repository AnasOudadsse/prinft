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
//_putchar.c
int _putchar(char c);
//printf_char
int printf_char(va_list val);

#endif
