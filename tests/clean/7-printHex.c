#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printHex - Prints an unsigned integer in hexadecimal format.
 * @specifier: Format specifier, 'x' for lowercase, 'X' for uppercase.
 * @args: List of arguments containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printHex(char specifier, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *hex_digits;
	char *buffer;
	int count = 0;
	int i = 0, j;

	/* Determine hexadecimal digits based on case */
	if (specifier == 'X')
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";

	if (num == 0) /* Handle zero case */
	{
		count += _putchar('0');
		return (count);
	}

	/* Allocate memory for buffer */
	buffer = (char *)malloc(9); /* 8 hex digits + 1 for null terminator */
	if (buffer == NULL)
		return (0); /* Handle memory allocation failure */

	buffer[8] = '\0'; /* Null terminator for the string */

	while (num > 0) /* Convert number to hexadecimal */
	{
		buffer[7 - i] = hex_digits[num % 16];
		num /= 16;
		i++;
	}

	/* Print the hexadecimal number */
	for (j = 8 - i; j < 8; j++)
		count += _putchar(buffer[j]);

	/* Free the allocated memory */
	free(buffer);

	return (count);
}

/**
 * _printHexLower - Prints an unsigned integer in lowercase hexadecimal format.
 * @args: List of arguments containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printHexLower(va_list args)
{
	return (_printHex('x', args));
}

/**
 * _printHexUpper - Prints an unsigned integer in uppercase hexadecimal format.
 * @args: List of arguments containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printHexUpper(va_list args)
{
	return (_printHex('X', args));
}
