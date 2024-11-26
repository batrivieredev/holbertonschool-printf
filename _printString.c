#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _printString - Prints a string to stdout.
 * @args: The list of arguments.
 *
 * Return: The number of characters printed.
 */
int _printString(va_list args)
{
char *str;
char *copied_str;
int count = 0;


str = va_arg(args, char *);


if (str == NULL)
str = "(null)";

/* Copy the string */
copied_str = _strcopy(str);
if (copied_str == NULL)
return 0;

while (*copied_str)
{
_putchar(*copied_str);
count++;
copied_str++;
}

free(copied_str - count);

return count;
}
