#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers- a function thta prints numbers 0 to 9
 * except 2 and 4
 *Return: Aways 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			putchar(c);
	}
	putchar('\n');
}
