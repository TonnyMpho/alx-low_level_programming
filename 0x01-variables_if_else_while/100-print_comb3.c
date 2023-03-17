#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all possible different
 * combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits1;
	int digits2;

	for (digits1 = 0; digits1 < 10; digits1++)
	{
		digits2 = digits1 + 1;

		if (digits1 < 10 && digits2 < 10)
		{
			putchar(digits1 + 48);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

