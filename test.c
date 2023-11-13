#include "main.h"


void print_char(va_list var)
{
char c = va_arg(var, int);
_putchar(c);
}
int main(void)
{
	print_char('A');
	return (0);
}
