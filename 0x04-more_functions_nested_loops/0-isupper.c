#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase characters
 * @c: the character to be checked
 * Return: 1 if c uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
