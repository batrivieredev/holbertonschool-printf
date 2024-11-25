#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - A simple implementation of printf.
 * @format: The format string containing format specifiers.
 *          Currently supports %c and %s.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += _printChar(args);
			else if (*format == 's')
				count += _printString(args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);

	return (count);
}
