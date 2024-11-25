#include "main.h"
#include <stdarg.h>

/**
 * _printInt - Prints an integer.
 * @args: List of arguments containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int _printInt(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	char buffer[11]; /* Enough for -2147483648 and '\0' */
	int i = 0, j;

	if (num == 0)
		return (_putchar('0'));

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
		count += _putchar(buffer[j]);

	return (count);
}
2
