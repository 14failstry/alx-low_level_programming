#include "main.h"
#include <stdio.h>

/**
 * print_square- a function that prints a square
 * followed by a new line
 *@size: the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}


