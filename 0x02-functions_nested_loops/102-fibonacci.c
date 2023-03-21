#include <stdio.h>

/**
 * main - Entry point
 * program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long num_1 = 0, num_2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = num_1 + num_2;
		printf("%lu", sum);

		num_1 = num_2;
		num_2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
