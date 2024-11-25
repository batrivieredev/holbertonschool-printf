#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/* Static buffer and index */
static char buffer[BUFFER_SIZE];
static size_t buffer_index = 0;

/**
 * buffer_add - Adds a character to the buffer.
 *
 * @c: The character to add to the buffer.
 *
 * Description:
 * Adds a single character to the buffer. If the buffer is full,
 * it will first flush the buffer before adding the new character.
 */
void buffer_add(char c)
{
        if (buffer_index >= BUFFER_SIZE)
        {
                flush_buffer();
        }
        buffer[buffer_index++] = c;
}
/**
 * flush_buffer - Flushes the contents of the buffer to standard output.
 *
 * Description:
 * The function checks if there are any characters in the buffer. If there
 * are, it writes them to stdout using the write system call. After writing,
 * it resets the buffer index to zero, so the buffer is cleared and ready
 * for new data.
 *
 * Return: This function does not return any value.
 *
 * Note:
 * The function helps reduce the number of system calls by accumulating
 * output in a buffer and writing it in bulk.
 */
void flush_buffer(void)
{
	if (buffer_index > 0)
	{
		write(1, buffer, buffer_index);
		buffer_index = 0;
	}
}

