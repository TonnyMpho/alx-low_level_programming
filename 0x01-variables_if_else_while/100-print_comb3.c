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

	for (digits1 = 0; digits1 < 9; digits1++)
	{
		for (digits2 = 1; digits2 < 10; digits2++)
		{
			putchar(digits1 + 48);
			putchar(digits2 + 48);

			if (digits1 < 9 && digits2 < 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

