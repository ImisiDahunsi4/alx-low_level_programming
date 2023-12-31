#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98,
 *               followed by a new line.
 * @n: The number to start printing from.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("98\n");
}

