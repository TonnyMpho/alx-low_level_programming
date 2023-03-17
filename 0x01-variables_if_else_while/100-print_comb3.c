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
	int digits_1;
	int digits_2;

	for (digits_1 = 0; digits_1 < 10; digits_1++)
	{
		digits_2 = digits_1++;
		if (digits_1 < 9 && digits_2 < 10)
		{
			putchar(digits_1);
			putchar(digits_2);

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

