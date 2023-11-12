#include "main.h"
/**
 * _printf - roduces output according to a format
 * @format: pointer to the const string character
 * Return: number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int start;
	int va_list var;
	char *str;
	char a;

	start = 0;
	va_start(var, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format = format + 1;
			if (*format == 's')
			{
				str = va_arg(var, char *);
				while (*str != '\0')
				{
					_putchar(*str);
					str = str + 1;
					start = start + 1;
				}
			}
			else if (*format == 'c')
			{
				a = va_arg(var, int);
				_putchar(c);
				start = start + 1;
			}
			else if (*format == '%')
			{
				_putchar('%');
				start = start + 1;
			}
		}
		else
		{
			_putchar(format);
			start = start + 1;
		}
		format = format + 1;
	}
	va_end(var);

	return (start);
}
