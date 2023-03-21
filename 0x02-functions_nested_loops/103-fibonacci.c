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
	float total_sum;
	unsigned long num_1 = 0, num_2 = 1, sum;

	while (1)
	{
		sum = num_1 + num_2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		num_1 = num_2;
		num_2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
