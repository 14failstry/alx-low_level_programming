#include "main.h"

/**
 * _isupper - a function that checks for uppercase characters
 * @c: the charater to be checked
 *
 * Return:0 if c is uppercase
 * 1 otherwise
 */
int _isupper(int c);

{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
