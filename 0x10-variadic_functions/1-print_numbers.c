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
	va_list nums;
    unsigned int index;

    va_start(nums, n);

    for (index = 0; index < n; index++)
    {
        printf("%d", va_arg(nums, int));

        if (separator != NULL && index < n - 1)
            printf("%s", separator);
    }

    printf("\n");

    va_end(nums);
}
