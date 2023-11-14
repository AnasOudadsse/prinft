#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	int chara = 0;
	va_list args_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chara++;
		}
		else
			format++;
		if (format == 'c')
	}
}
