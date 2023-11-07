#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_percent - prints a percent sign is there's a double %
 * @args: unused
 *
 * Return: Number of char printed
*/

int print_percent(__attribute__((unused)) va_list args)
{
	putchar('%');
	return (1);
}


/**
 * print_no - prints nothing, edge cases
 * @args: unused
 *
 * Return: 0
*/

int print_no(__attribute__((unused)) va_list args)
{
	return (-1);
}

/**
 * catcher - prints % and a char for edge cases
 * @args: Does nothing here
 *
 * Return: 2
*/

int catcher(__attribute__((unused)) va_list args)
{
	return (2);
}
