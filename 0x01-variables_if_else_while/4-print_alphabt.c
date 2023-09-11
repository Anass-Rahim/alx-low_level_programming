#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the alphabet.
 *
 * return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
