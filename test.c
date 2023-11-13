#include "main.h"


void print_char(va_list var)
{
char c = va_arg(var, int);
_putchar(c);
}
int main(void)
{
	va_list args;
	va_start(args, 0);

	print_char(args);

	va_end(args);

	return (0);
}
