#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * _printf - A simple version of the printf function
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

if (!format) /* Check if the format string is NULL */
return (-1);

va_start(args, format); /* Initialize the argument list */

while (format[i] != '\0') /* Loop through the format string */
{
if (format[i] == '%')  /* Handle format specifier */
{
i++;  /* Skip '%' and move to next character */
printed_chars = spe(format, &i, args, &printed_chars);
}
else
{
/* Print normal character and increment printed_chars */
printed_chars += _putchar(format[i]);
}
i++;
}

va_end(args); /* End using the argument list */
return (printed_chars); /* Return the total number of printed characters */
}
