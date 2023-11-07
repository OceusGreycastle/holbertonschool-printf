#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
/**
 * print_int - prints an integer
 * @args: arguments that format the data type
 * Return: number of characters printed
*/
int print_int(va_list args)
{
	int i = 0;
	int abcalc, abvault, track_dig;
	int value = va_arg(args, int);

	if (value == INT_MIN)
	{
		putchar ('-');
		i++;
		abcalc = INT_MAX;
	}
	else if (value < 0)
	{
		putchar ('-');
		i++;
		abcalc = value * -1;
	}
	else
	{
		abcalc = value;
	}
	abvault = abcalc;
	track_dig = 1;

	while (abvault > 9)
	{
		abvault = abvault / 10;
		track_dig = track_dig  * 10;
	}
	while (track_dig >= 1)
	{
		if (value == INT_MIN && track_dig == 1)
		{
			putchar('8');
			i++;
			track_dig = track_dig / 10;
		}
		else
		{
			i++;
			putchar(((abcalc / track_dig) % 10) + '0');
			track_dig = track_dig / 10;
		}
	}
	return (i);
}
