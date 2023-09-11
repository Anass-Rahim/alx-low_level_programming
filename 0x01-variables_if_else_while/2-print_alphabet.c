#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

