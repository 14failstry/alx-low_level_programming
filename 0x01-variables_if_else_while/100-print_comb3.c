#include <stdio.h>

/**
 * main- Entry point
 *
 * all possible different combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x > y)
			{
				putchar(x);
				putchar(y);
			}
		}
	}
}
putchar('\n');
return (0);
}


