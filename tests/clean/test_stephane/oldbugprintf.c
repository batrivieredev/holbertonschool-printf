#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
* _printf - a simple version of function printf
* @format: the format containing the text to be written to stdout
*
* Return: the number of character printed (excluding \0 used to end)
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	int printed_chars = 0;

	/*declaration de la structure print-t pour stocker les specificateur et*/
	/*les fonctions associées*/
	print_t prt[] = {
		{'c', _printChar},
		{'s', _printString},
		{'%', _printPercent},
		{'d', _printInt},
		{'i', _printInt},
		{'u', _printUnsigned},
		{'o', _printOctal},
		{'x', _printHex},
		{'X', _printHex},
		{'p', _printPointer},
		{0, NULL} /*fin du tableau des specificateurs*/
	};

	if (format == NULL) /*verification of format not NULL*/
		return (-1);

	va_start(args, format);/*initialisation de la list des arguments*/

	while (format && format[i]) /* ou (*(format + i))*/
	{
		if (format[i] == '%')
		{
			i++;
			/*second loop to find the matching*/
			j = 0;
			while (prt[j].cara) /*verifie les specificateurs disponible*/
			{
				if (format[i] == prt[j].cara)/*compare le specificateur */
				{
					printed_chars += prt[j].func(args); /*call function approe*/
					break;
				}
				j++;
			}
			/*if no matching specifier is fond, print '%'*/
			if (!prt[j].cara)
			{
				printed_chars += _putchar('%'); /*imprime le %*/
				if (format[i]) /*si le caractère suivant existe*/
					printed_chars += _putchar(format[i]); /*print next caract*/
			}
		}
		else
		{
			/*print regular caracters*/
			printed_chars += _putchar(format[i]);
		}
		i++; /* correction de l'incrementation*/
	}

	va_end(args); /*end use list_arg*/
	return (printed_chars); /*retourne le nombre de caractere print*/
}
2
