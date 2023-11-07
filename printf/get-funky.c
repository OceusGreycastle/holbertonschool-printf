#include "main.h"
#include <stdio.h>
/**
 * get_func - function that finds format specifiers as well as return ops
 * @format: character in format string
 * Return: returns NULL on fail, functions from array otherwise
*/
int (*get_func(char format))(va_list args)
{
	fm_t forms[] = {
		{'c', print_char},
		{'d', print_int},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL}
	};
	int x = 0;

	while (forms[x].fun != '\0')
	{
		if (forms[x].fun == format)
				return (forms[x].f);
		x++;
	}
	return (NULL);
}
