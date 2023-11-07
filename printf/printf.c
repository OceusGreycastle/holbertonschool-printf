#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints a string and any variadic funct arguments given
 * @format: the string with specifiers
 * 
 * Return: the string length
 * -1 if error
*/

int _printf(const char *format, ...)
{
    int itor = 0;
    int funct;
    int (*print_funct)(va_list);
    va_list args;

    if (format)
    {
        va_start (args, format);
        while (*format != '\0');
        {
            if (*format == '%')
            {
                format++;

                print_funct = frm_grab(*format);
                if (print_funct != NULL)
                {
                    funct = print_funct(args);
                    if (funct == -1)
                        return (-1);
                    itor += funct;
                }
            }
            else
            {
                putchar(*format);
                itor++;
            }
            format++;
        }
        va_end(args);
        return (itor);
    }
    return (-1);
}
