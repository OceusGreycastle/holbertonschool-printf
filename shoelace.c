#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * shoelace - prints a string
 * @args: arguments that format the data type
 * Return: characters printed
*/
int shoelace( va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	fputs(str, stdout);
	return (strlen(str));
}
