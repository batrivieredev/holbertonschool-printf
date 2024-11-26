#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count = 0; // To count the number of characters printed
	va_list args;  // To handle the variable arguments

	va_start(args, format); // Initialize the argument list

	for (const char *p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{		 // Check for format specifier
			p++; // Move to the next character
			switch (*p)
			{
			case 'c':
			{									  // Character
				char c = (char)va_arg(args, int); // Get the character argument
				putchar(c);						  // Print the character
				count++;						  // Increment count
				break;
			}
			case 's':
			{									// String
				char *s = va_arg(args, char *); // Get the string argument
				if (s == NULL)
				{ // Handle NULL string
					s = "(null)";
				}
				while (*s)
				{ // Print each character of the string
					putchar(*s);
					s++;
					count++; // Increment count
				}
				break;
			}
			case '%':		  // Percent sign
				putchar('%'); // Print percent sign
				count++;	  // Increment count
				break;
			default:		  // Invalid format specifier
				putchar('%'); // Print the '%' character
				putchar(*p);  // Print the invalid specifier
				count += 2;	  // Increment count by 2
				break;
			}
		}
		else
		{				 // Regular character
			putchar(*p); // Print the character
			count++;	 // Increment count
		}
	}

	va_end(args); // Clean up the argument list

	return count; // Return the total count of printed characters
}

int main()
{
	int printed_chars;

	printed_chars = _printf("Hello %s! You have %c new messages. %%\n", "Alice", '5');
	printf("Printed characters: %d\n", printed_chars);

	return 0;
}
