#include "main.h"
#include <stdio.h>

/**
 * print_line- a function that draws a straight line on a termial
 * @n: number of times the character _ should be printed
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}

}

