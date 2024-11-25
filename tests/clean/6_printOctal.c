#include "main.h"
#include <stdarg.h>

/**
 * _printOctal - Prints an unsigned integer in octal format.
 * @args: List of arguments containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printOctal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char buffer[11]; /* Enough for octal representation */
	int i = 0, j;

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		buffer[i++] = (num % 8) + '0';
		num /= 8;
	}

	for (j = i - 1; j >= 0; j--)
		count += _putchar(buffer[j]);

	return (count);
}
