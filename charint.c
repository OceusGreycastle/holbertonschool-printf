#include "main.h"
#include <unistd.h>

/**
 * _putchar - puts char c into stdout
 * @c: char to print
 *
 * Return: 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * putint - puts int i into stdout
 * @i: int to print
 *
 * Return: 1
*/

int putint(int i)
{
	return (write(1, &i, 1));
}
