#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * spe - Handles the printing of a specifier
 * @format: the format string
 * @i: the current index in the format string
 * @args: the list of arguments
 * @printed_chars: the number of characters printed so far
 *
 * Return: the updated number of characters printed
 */
int spe(const char *format, unsigned int *i, va_list args, int *printed_chars)
{
print_t prt[] = {
{'c', _printChar}, {'s', _printString}, {'%', _printPercent},
{'d', _printInt}, {'i', _printInt}, {'u', _printUnsigned},
{'o', _printOctal}, {'x', _printHexLower}, {'X', _printHexUpper},
{'p', _printPointer}, {'b', _printBinary}, {0, NULL}
};

unsigned int j = 0;
while (prt[j].cara)  /* Iterate over the print_t array */
{
if (format[*i] == prt[j].cara)  /* Match specifier */
{
*printed_chars += prt[j].func(args);  /* Call the corresponding function */
return (*printed_chars);
}
j++;  /* Move to the next specifier */
}

*printed_chars += _putchar('%');  /* Print the '%' if no specifier match */
if (format[*i])  /* If there is a valid character after '%' */
*printed_chars += _putchar(format[*i]);  /* Print that character */

return (*printed_chars);
}
