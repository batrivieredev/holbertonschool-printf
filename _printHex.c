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

if (specifier == 'X')
hex_digits = "0123456789ABCDEF";
else
hex_digits = "0123456789abcdef";

if (num == 0)
{
count += _putchar('0');
return (count);
}

buffer = (char *)malloc(9);
if (buffer == NULL)
return (0);

buffer[8] = '\0';

while (num > 0)
{
buffer[7 - i] = hex_digits[num % 16];
num /= 16;
i++;
}

for (j = 8 - i; j < 8; j++)
count += _putchar(buffer[j]);
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
