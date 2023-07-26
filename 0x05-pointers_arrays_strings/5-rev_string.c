#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 */
void rev_string(char *s)
{
        char rev;
        int counter = 0;
        int i;

        while (s[counter] != '\0')
                counter++;

        for (i = 0; i < counter / 2; i++)
        {
                rev = s[i];
                s[i] = s[counter - i - 1];
                s[counter - i - 1] = rev;
        }
}

