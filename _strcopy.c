#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcopy - Copies a string to a newly allocated memory.
 * @src: The source string to copy.
 *
 * Return: A pointer to the newly allocated string, or NULL on failure.
 */
char *_strcopy(const char *src)
{
    char *dest;
    size_t len;

    if (src == NULL)
        return (NULL);

    len = _strlen(src) + 1; /* +1 for the null terminator */
    dest = malloc(len);
    if (dest == NULL)
        return (NULL);

    memcpy(dest, src, len);
    return (dest);
}