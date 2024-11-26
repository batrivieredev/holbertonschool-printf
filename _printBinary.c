#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printBinary - Prints an unsigned integer in binary.
 * @args: List of arguments containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printBinary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char *binary_str;
int count = 0;
int i, j;
unsigned int temp;

if (num == 0)
{
return (_putchar('0'));
}

binary_str = malloc(33);
if (binary_str == NULL)
return (0);

binary_str[32] = '\0';
temp = num;
for (i = 31; i >= 0; i--)
{
binary_str[i] = (temp % 2) ? '1' : '0';
temp /= 2;
}

i = 0;
while (i < 32 && binary_str[i] == '0')
i++;

for (j = i; j < 32; j++)
count += _putchar(binary_str[j]);

free(binary_str);

return (count);
}
