#ifndef HEADER
#define HEADER

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * 
*/

typedef struct fm
{
    /** format spec holder */
    char fun;

    /** hold operation */
    int (*f)(valist);

} form;

int (*get_func(char format))(va_list args);

int _putchar(char);

int _printf(const char *format, ...);

int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);


#endif
