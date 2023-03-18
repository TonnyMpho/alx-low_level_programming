#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all possible different
 * combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits1;
	int digits2;
	int digits3;

	for (digits1 = 0; digits1 < 8; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 < 9; digits2++)
		{
			for (digits3 = digits2 + 1; digits3 < 10; digits3++)
			{
				putchar((digits1 % 10) + 48);
				putchar((digits2 % 10) + 48);
				putchar(digits3 + 48)

				if (digits1 < 7 && digits2 < 8 && digits3 <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

