#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- a function that draws a diagonal line on the terminal
 * @n: the number fo times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					putchar ('\\');
				else if (y < x)
					putchar ('');
			}
			putchar ('\n');
		}
	}
}
