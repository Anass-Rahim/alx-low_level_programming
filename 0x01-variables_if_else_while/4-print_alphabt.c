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

        for (i - 97; i < 123; i++)
        {
		if (i != 101 && i != 123)
		{
			putchar(i);
		}
        }
        putchar('\n');
        return (0);
}