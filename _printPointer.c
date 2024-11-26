#include "main.h"
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

/**
 * _printPointer - Prints a pointer address.
 * @args: List of arguments containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int _printPointer(va_list args)
{
void *ptr = va_arg(args, void *);
uintptr_t addr = (uintptr_t)ptr;
int count = 0;
char buffer[16];
int i = 0;
char hex_chars[] = "0123456789abcdef";

count += _putchar('0');
count += _putchar('x');

if (addr == 0)
{
count += _putchar('0');
return (count);
}

while (addr > 0)
{
buffer[i++] = hex_chars[addr % 16];
addr /= 16;
}

while (i > 0)
count += _putchar(buffer[--i]);
return (count);
}
