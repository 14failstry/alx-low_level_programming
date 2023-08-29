#include "main.h"
#include <unist.h>

/**
 * _putchar- writes the character c in stdout
 * @c: the character to print
 *
 * Return: Always 0(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

