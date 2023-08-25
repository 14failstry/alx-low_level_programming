#include "main.h"
#include <stdio.h>

/**
 * print_numbers- a function that prints numbers 0 to 9
 * followed by a new line
 *
 * Return: numbers from 0 to 9
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
}

