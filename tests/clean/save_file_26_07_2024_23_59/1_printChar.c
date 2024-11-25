#include "main.h"
#include <stdarg.h>

/**
 * _printChar - Prints a single character.
 * @args: List of arguments containing the character to print.
 *
 * Return: The number of characters printed (always 1).
 */
int _printChar(va_list args)
{
	char c = va_arg(args, int); /* Cast to int*/

	return (_putchar(c));
}
