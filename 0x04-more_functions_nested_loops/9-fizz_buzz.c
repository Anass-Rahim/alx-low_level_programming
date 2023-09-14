#include "stdio.h"
/**
* main - The “Fizz-Buzz test” is an interview question designed
* to help filter out the 99.5% of programming job candidates who
* can’t seem to program their way out of a wet paper bag.
* Write a program that prints the numbers from 1 to 100,
* Return: always 0 (success)
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0 && (i % 5) != 0)
{
printf("Fizz");
}
else if ((i % 5) == 0 && (i % 3) != 0)
{
printf("Buzz");
}
else if ((i % 3) == 0 && (i % 5) == 0)
{
printf("FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
}
printf("\n");

return (0);
}
