#include "main.h"

/**
 *jack_bauer - a function that prints every minute of the day ,00:00 to 23:59
 *Return: every minute of the day starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int x, y;

	x = 0;

	while (x < 24)
	{
		y = 0;
			while (y < 60)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				_putchar(':');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
				_putchar('\n');
				y++;
			}
			x++;
	}
}
