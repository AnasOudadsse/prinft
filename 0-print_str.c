#include "main.h"
/**
 * print_string - function that will return when it's used
 * @str: string to be used
 * Return: how many chars get printed without the null
 */
int print_string(char *str)
{
	int start;

	start = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		start = start + 1;
		str = str + 1;
	}
	return start;
}
