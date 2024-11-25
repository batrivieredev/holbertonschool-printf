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
	char *str = va_arg(args, char *);
	char *ptr;
	char *str_copy;
	int count = 0;

	if (str == NULL)
		str = "(null)";

	str_copy = (char *)malloc(strlen(str) + 1);
	if (str_copy == NULL)
		return (0);

	strcpy(str_copy, str);
	ptr = str_copy;

	while (*ptr)
	{
		count += _putchar(*ptr);
		ptr++;
	}

	free(str_copy);

	return (count);
}
