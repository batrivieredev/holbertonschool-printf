#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1); /* Write the character to stdout */
}

/**
 * spe - processes format specifiers and prints accordingly
 * @format: the format string
 * @i: pointer to the current index in the format string
 * @args: the variable argument list
 * @printed_chars: pointer to the count of printed characters
 *
 * Return: the number of characters printed by this function
 */
int spe(const char *format, unsigned int *i, va_list args, int *printed_chars)
{
	int count = 0; /* To count characters printed by this function */

	switch (format[*i])
	{
	case 'c':
	{									  /* Character */
		char c = (char)va_arg(args, int); /* Get the character argument */
		count += _putchar(c);			  /* Print and count the character */
		break;
	}
	case 's':
	{									/* String */
		char *s = va_arg(args, char *); /* Get the string argument */
		if (s == NULL)
		{ /* Handle NULL string */
			s = "(null)";
		}
		while (*s)
		{ /* Print each character of the string */
			count += _putchar(*s);
			s++;
		}
		break;
	}
	case '%':					/* Percent sign */
		count += _putchar('%'); /* Print percent sign */
		break;
	default:						   /* Invalid format specifier */
		count += _putchar('%');		   /* Print the '%' character */
		count += _putchar(format[*i]); /* Print the invalid specifier */
		break;
	}

	(*i)++;		  /* Move to the next character after the specifier */
	return count; /* Return the count of characters printed */
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

	while (format[i]) /* iterate through the format string */
	{
		if (format[i] == '%')
		{
			i++; /* move to the next character */
			printed_chars += spe(format, &i, args, &printed_chars);
		}
		else
		{
			/* prints formatted output and counts characters. */
			printed_chars += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);			/* end using the argument list */
	return (printed_chars); /* return the number of characters printed */
}

int main()
{
	int printed_chars;

	printed_chars = _printf("Hello %s! You have %c new messages. %%\n", "Alice", '5');
	printf("Printed characters: %d\n", printed_chars);

	return 0;
}
