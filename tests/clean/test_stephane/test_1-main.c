#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int l;

	printf("Expected: 1024\n");
	_printf("Output  : %d\n\n", 1024);

	printf("Expected: -1024\n");
	_printf("Output  : %d\n\n", -1024);

	printf("Expected: %d\n", INT_MAX);
	_printf("Output  : %d\n\n", INT_MAX);

	printf("Expected: %d\n", INT_MIN);
	_printf("Output  : %d\n\n", INT_MIN);

	l = (long int)INT_MAX + 1024;
	printf("Expected: %ld\n", l);
	_printf("Output  : %d\n\n", l);

	l = (long int)INT_MIN - 1024;
	printf("Expected: %ld\n", l);
	_printf("Output  : %d\n\n", l);

	printf("Expected: 1024 - 2048 = -1024\n");
	_printf("Output  : %d - %d = %d\n\n", 1024, 2048, -1024);

	printf("Expected: %d == %i\n", 1024, 1024);
	_printf("Output  : %d == %i\n", 1024, 1024);

	return (0);
}
