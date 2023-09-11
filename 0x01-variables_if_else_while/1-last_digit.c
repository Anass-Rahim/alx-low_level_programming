#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly gereted number
 *
 * and whether it is graeter than 5, les than 6, or 0
 *
 * return: Always 0 = (success).
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d	and is grater than 5", n, m);
	else if (m == 0)
		printf("last digit of %d is %d	and is 0", n, m);
	else if (m < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");
	return (0);

}
