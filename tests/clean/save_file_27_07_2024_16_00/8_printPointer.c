#include "main.h"
#include <stdarg.h>
#include <stdint.h>
/*uintptr_t on stdint.h résolution adresses bigest*/
#include <unistd.h> /*for _putchar*/

/**
 * _printPointer - Prints a pointer address.
 * @args: List of arguments containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int _printPointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	/*unsigned long addr = (unsigned long)ptr; don't use problem with adress*/
	uintptr_t addr = (uintptr_t)ptr; /*Utilisez uintptr_t pour les adresses*/
	int count = 0;
	char buffer[16]; /* Enough for hexadecimal representation of pointers */
	int i = 0;
	char hex_chars[] = "0123456789abcdef";
/*addr = (void *)0x1000;  // Utiliser une adresse plus petite*/

	count += _putchar('0');
	count += _putchar('x');

	if (addr == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (addr > 0) /*convert hexadecimal adress*/
	{
		buffer[i++] = hex_chars[addr % 16];
		addr /= 16;
	}

	while (i > 0) /* display hexadecimal adress*/
		count += _putchar(buffer[--i]);

	return (count);
}
