#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet.
 *
 * return: always 0 (success)
 */

int main(void)
{
	int i, m;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
	for (m = 'A'; m < 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
