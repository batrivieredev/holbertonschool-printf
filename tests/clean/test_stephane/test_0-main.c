#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *big_str = "This is a very long string that we want to tebbbbly.";

	printf("Let's print a simple sentence.\n");
	_printf("Let's print a simple sentence.\n");
	printf("%c\n", 'S');
	_printf("%c\n", 'S');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("%s", "This sentence is retrieved from va_args!\n");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%%\n");
	_printf("%%\n");
	printf("Should print a single percent sign: %%\n");
	_printf("Should print a single percent sign: %%\n");
	printf("css%ccs%scscscs\n", 'T', "Test");
	_printf("css%ccs%scscscs\n", 'T', "Test");
	printf("%s\n", big_str);
	_printf("%s\n", big_str);
	printf("man gcc:\n%s\n", big_str);
	_printf("man gcc:\n%s\n", big_str);
	printf(NULL);
	_printf(NULL);
	printf("%c\n", '\0');
	_printf("%c\n", '\0');
	printf("%\n");
	_printf("%\n");
	printf("%!\n");
	_printf("%!\n");
	printf("%K\n");
	_printf("%K\n");
	return (0);
}
