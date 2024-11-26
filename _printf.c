#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Writes a single character to stdout
 * @c: The character to print
 *
 * Return: On success, the number of characters written (1).
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Writes a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters written.
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _printf - Produces output according to a format
 * @format: The format string containing the characters and the specifiers
 *
 * Return: The number of characters printed (excluding the null byte
 * used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, printed_chars = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				printed_chars += _putchar(va_arg(args, int));
				break;
			case 's':
				printed_chars += _puts(va_arg(args, char *));
				break;
			case '%':
				printed_chars += _putchar('%');
				break;
			default:
				printed_chars += _putchar('%');
				printed_chars += _putchar(format[i]);
				break;
			}
		}
		else
		{
			printed_chars += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (printed_chars);
}
