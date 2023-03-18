#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a spaceAll numbers
 * should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits1, digits2;

	for (digits1 = 0; digits1 <= 98; digits1++)
	{
		for (digits2 = 0; digits2 <= 99; digits2++)
		{
			putchar(digits1 + 48);
			putchar(digits1 + 48);
			putchar(' ');
			putchar(digits2 + 48);
			putchar(digits2 + 48);

			if (digits1 < 98 && digits2 <=98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
