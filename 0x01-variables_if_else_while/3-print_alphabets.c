#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * prints alphabet in lowercase then uppercase
 *
 * Return:Always 0(Success)
 */
int main(void)
{

	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar("/n");
	return (0);
}
