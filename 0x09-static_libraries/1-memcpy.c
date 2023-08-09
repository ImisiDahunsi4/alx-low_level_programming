#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Memory where data is stored.
 * @src: Memory where data is copied from.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int r = 0;

    for (; r < n; r++)
    {
        dest[r] = src[r];
    }

    return (dest);
}
