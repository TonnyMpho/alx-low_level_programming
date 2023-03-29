#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 success
 */
int main(void)
{
	char generated_pass[80];
	int sum = 0, random = 0, count = 0;

	srand(time(NULL));

	while (sum < 2772)
	{

		if (2772 - sum < 48)
		{
			sum -= generated_pass[--count];
		}
		else if (2772 - sum <= 126)
		{
			random = 2772 - sum;
		}
		else
		{
			random = rand() % (126 - 48) + 48;
		}

		if (random)
		{
			generated_pass[count++] = random;
			sum += random;
		}
		random = 0;
	}

	generated_pass[count] = '\0';
	printf("%s\n", generated_pass);

	return 0;
}
