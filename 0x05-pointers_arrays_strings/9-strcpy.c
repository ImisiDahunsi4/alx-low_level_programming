#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy destination
 * @src: copy source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
        int i = 0;

        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';

        return (dest);
}

