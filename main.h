#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

=======
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
//printf_srting
int prinft_string(va_list agr);
//_strlen.c
int _strlen(char *str);
int _strlenc(const char *str);
#endif
