#include "main.h"

/**
 * print_line- a function that draws a straight line on a termial
 * @n: number of times the character _ should be printed
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

