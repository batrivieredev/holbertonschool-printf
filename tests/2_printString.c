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

    /* Retrieve the string from the argument list */
    str = va_arg(args, char *);

    /* If the string is NULL, treat it as "(null)" */
    if (str == NULL)
        str = "(null)";

    /* Copy the string */
    copied_str = _strcopy(str);
    if (copied_str == NULL)
        return 0; /* or handle the error as needed */

    /* Print each character using _putchar */
    while (*copied_str)
    {
        _putchar(*copied_str);
        count++;
        copied_str++;
    }

    /* Free the allocated memory */
    free(copied_str - count);

    return count;
}