#include "main.h"
/**
 * print_str_exc - printing strings that are exclusive
 * @val: value
 * Return: length (Success)
 */
int print_str_exc(va_list val)
{
	char *str;
	int a;
	int len;
	int num;

	len = 0;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			num = str[a];

			if (num < 16)
			{
				_putchar('0');
				len = len + 1;
			}
			len = len + print_extra_hex(num);
		}
		else
		{
			_putchar(str[a]);
			len = len + 1;
		}
	}
	return (len);
}
