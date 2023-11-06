#include "main.h"


int _printf(const char *format)
{
    int trace =0;

    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            trace += (get_func(*format)(args));
            format++;
        }
        else
        {
            _putchar(*format);
            trace += 1;
            format++;
        }
    }
    return (trace);
}
