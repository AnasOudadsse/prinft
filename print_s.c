#include "main.h"

/**
 * printf_string - prints a string
 * @arg: an argument
 * Return: returns the lenght of the string
*/

int prinft_string(va_list agr)
{
	char *string;
	int i;
	int length;

	string = va_arg(val, char *)
	if (string == NULL)
	{
		string = "(null)";
		length = _strlen(string);
		for (i = 0; i < length; i++)
			_putchar(string[i]);
		return (length);
	}
	else
	{
		length = _strlen(string)
		for (i = 0; i< length; i++)
			_putchar(string[i]);
		return (length);
	}
}
