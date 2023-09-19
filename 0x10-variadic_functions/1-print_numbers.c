#include "print_numbers.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers- a function that prints numbers
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: a variableof number of numbers to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}


