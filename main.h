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
<<<<<<< HEAD
//printf_srting
int prinft_string(va_list agr);
//_strlen.c
int _strlen(char *str);
int _strlenc(const char *str);
=======
/*this one for printing string in 0-print_str.c*/
int print_string(char *str);

>>>>>>> 940d9ed1561b9a93db05f1ae416da968cc0b3366
#endif
