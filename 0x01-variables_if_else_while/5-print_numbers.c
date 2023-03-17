#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	return (0);
}
