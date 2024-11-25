#include <stddef.h>
#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
    size_t length = 0;

    if (s == NULL)
        return (0);

    while (*s != '\0') {
        length++;
        s++;
    }

    return (length);
}