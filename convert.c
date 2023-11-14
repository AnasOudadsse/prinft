#include "main.h"

/**
 * handle - search for match and execute for the right function
 * @match_char: the character to match
 * @match_char_pos: match_char position
 * Return: the function that matches or null
*/

int (*handle_match(const char *match_char, int match_char_pos))(va_list)
{
	int i;

	convert option[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{NULL, NULL}
	};

	for (i = 0; option[i]
