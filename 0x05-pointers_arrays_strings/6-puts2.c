#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: input string
 */
void puts2(char *str)
{
        int longi = 0;
        int o;

        while (*str != '\0')
        {
                str++;
                longi++;
        }

        for (o = 0; o < longi; o += 2)
        {
                _putchar(str[o]);
        }
        _putchar('\n');
}

