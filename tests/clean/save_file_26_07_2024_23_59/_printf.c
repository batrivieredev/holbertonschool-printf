#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * spec - Handles the printing of a specifier
 * @format: the format string
 * @i: the current index in the format string
 * @args: the list of arguments
 * @printed_chars: the number of characters printed so far
 *
 * Return: the updated number of characters printed
 */
int spec(const char *format, unsigned int *i, va_list args, int printed_chars)
/* fix function more than 40 lines */
{
	print_t prt[] = {
		{'c', _printChar}, {'s', _printString}, {'%', _printPercent},
		{'d', _printInt}, {'i', _printInt}, {'u', _printUnsigned},
		{'o', _printOctal}, {'x', _printHexLower}, {'X', _printHexUpper},
		{'p', _printPointer}, {'b', _printBinary}, {0, NULL} /* end of specif. [] */
	};

	unsigned int j = 0;

	while (prt[j].cara) /*iterate elem print_t struct prt if <> NULL */
	{
		if (format[*i] == prt[j].cara)  /*if cara match specifier, true*/
		{
			printed_chars += prt[j].func(args);
			/*funct prt[j].func is call with list arg*/
			return (printed_chars);
		}
		j++; /*incrementation index*/
	}
	printed_chars += _putchar('%'); /* NULL _putchar % ->not in specifier*/
	if (format[*i]) /*if not NULL _putchar format specifier*/
		printed_chars += _putchar(format[*i]); /*print the next caracter*/

	return (printed_chars);
}

/**
 * _printf - a simple version of the printf function
 * @format: the format string containing the text to be written to stdout
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed_chars = 0;

	if (format == NULL) /* check if format is NULL */
		return (-1);

	va_start(args, format); /* initialize the argument list */

	while (format && format[i]) /*if format not NULL and i<>'\0'*/
	{
		if (format[i] == '%')
		{
			i++; /* iteration and next call funct specifier format*/
			printed_chars = spec(format, &i, args, printed_chars);
		}
		else
		{
			/* print regular characters and count of printed characters is updated*/
			printed_chars += _putchar(format[i]);
		}
		i++;
	}

	va_end(args); /* end using the argument list */
	return (printed_chars); /* return the number of characters printed */
}
