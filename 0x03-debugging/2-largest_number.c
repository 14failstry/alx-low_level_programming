#include "main.h"

/**
 * largest_number- returns the argest of 3 numbers
 * @a: Firt integer
 * @b: Second integer
 * @c: Third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}

