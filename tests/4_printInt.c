#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * _printInt - Prints an integer.
 * @args: List of arguments containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int _printInt(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
	num = n;
	}

	if (num / 10)
	{
		count += _printIntHelper(num / 10);
	}
		count += _putchar((num % 10) + '0');

	return (count);
}

/**
 * _printIntHelper - Helper function to print an unsigned integer recursively.
 * @n: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printIntHelper(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += _printIntHelper(n / 10);
	}
	count += _putchar((n % 10) + '0');

	return (count);
}
