#include "main.h"
#include <stdarg.h>

/**
 * _printPercent - Prints a percent sign.
 * @args: List of arguments (not used).
 *
 * Return: The number of characters printed (always 1).
 */
int _printPercent(va_list args)
{
	(void)args; /* args unused */

	return (_putchar('%'));
}
