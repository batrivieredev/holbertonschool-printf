#include "main.h"
#include <stdarg.h>

/**
 * _printString - Prints a string.
 * @args: List of arguments containing the string to print.
 *
 * Return: The number of characters printed.
 */
int _printString(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
