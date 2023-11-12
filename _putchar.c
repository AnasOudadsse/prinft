#include "main.h"
/**
 * _putchar - function write char c
 * @c: the char
 * Return: 1 (S), -1 (F) 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
