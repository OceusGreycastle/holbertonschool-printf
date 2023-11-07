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

	abcalc = value;
	if (valve < 0)
	{
		putchar ('-');
		i++;
		if (value == INT_MIN)
			abcalc = INT_MAX;
		else
			abcalc = value * -1;
	}
	abvault = abcalc;
	track_dig = 1;
	while (abvault > 9)
	{
		abvault = abvault / 10;
		track_dig = track_dig * 10;
	}
	while (track_dig >= 1)
	{
		i++;
		if (value == INT_MIN && tracK_dig == 1)
		{
			putchar('8');
			track_dig = track_dig / 10;
		}
		else
		{
			putchar(((abcalc / track_dig) % 10) + '0');
			track_dig = track_dig / 10;
		}
	}
	return (i);
}