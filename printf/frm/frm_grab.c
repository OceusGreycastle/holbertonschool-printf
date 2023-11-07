#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * frm_grab - get funct for format
 * @sp: format input
 * 
 * Return: pointer to the funct
*/

int (*frm_grab(char sp))(va_list)
{
	int i = 0;

	fm_t frm[] = {
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'s', print_str},
		{'%', print_percent},
		{'\0', print_no},
		{'~', catcher},
	};

	while (i < 6)
	{
		if (sp == frm[i].fun)
		{
			return (frm[i].f);
		}

		i++;
	}

	putchar('%');
	putchar(sp);
	return (catcher);
}
