#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints all possible
 * combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * Using the putcha
 * Return; Always 0 (success)
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
	{
		putchar(digits + 48);
		if (digits < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
