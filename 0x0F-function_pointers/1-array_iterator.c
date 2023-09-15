#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- a function that prints array elements
 * @array: array
 * @size: size of the array
 * @action: a pointer to a function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

