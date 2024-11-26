#include "main.h"
#include <stdarg.h>

/**
 * _printUnsigned - Prints an unsigned integer.
 * @args: List of arguments containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printUnsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char buffer[10];
	int i = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (num > 0)
	{
		buffer[i++] = '0' + (num % 10);
		num /= 10;
	}

	while (i > 0)
		count += _putchar(buffer[--i]);

	return (count);
}
