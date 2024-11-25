#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

/*prototype printf*/
int _printf(const char *format, ...);

int spec(const char *format, unsigned int *i, va_list args, int printed_chars);

/*helper function printf*/
/*0*/
int _putchar(char c);

/*1 'c'*/
int _printChar(va_list args);

/*2 's'*/
int _printString(va_list args);

/*3 '%'*/
int _printPercent(va_list args);

/*4 'd' and 'i'*/
int _printInt(va_list args);
int _printIntHelper(unsigned int n);

/*5 'u'*/
int _printUnsigned(va_list args);

/*6 'o'*/
int _printOctal(va_list args);

/*7 'x' and 'X'*/
/*int _printHex(va_list args);*/
int _printHex(char specifier, va_list args);
int _printHexLower(va_list args);
int _printHexUpper(va_list args);

/*8 'p'*/
int _printPointer(va_list args);

/*9 'b'*/
int _printBinary(va_list args);

/*int _strlen(const char *str);*/
/*int _printDecimal(va_list args);*/
/*int _printInteger(va_list args);*/
/*int (*get_format(char c))(va_list);*/

/**
 * struct print_t - Structure to map format specifiers to functions.
 * @cara: The format specifier, such as 'c', 's', or '%'.
 * @func: A pointer to a function that takes a va_list and returns an integer.
 *        This function handles printing the data for the format specifier.
 *
 * Description:
 * This structure links a format specifier to a specific printing function.
 * When a format specifier is encountered, the associated function is called
 * to handle and print the corresponding data.
 *
 * Example usage:
 * struct print_t prt[] = {
 *     {'c', print_char_function},
 *     {'s', print_string_function},
 *     {'%', print_percent_function}, ........
 *     {0, NULL}   End of the specifier list
 * };
 */
typedef struct print_t
{
	char cara; /*char format is char cara now*/
	int (*func)(va_list args);
} print_t;

#endif /*MAIN_H*/
