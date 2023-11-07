#ifndef HEADER
#define HEADER

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * @fun: operational variable
 * @f: returning function
*/

typedef struct frm
{
	/** format spec holder */
	char fun;

	/** hold operation */
	int (*f)(va_list);

} fm_t;

int (*get_func(char format))(va_list args);

int _putchar(char);
int putint(int);

int _printf(const char *format, ...);

int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int shoelace(va_list args);
int print_no(va_list);
int catcher(va_list);

#endif
