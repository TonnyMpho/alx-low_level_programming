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
	int counter, sum, random;

	sum = 0;
	counter = 0;
	random = 0;

	char password[80];

	srand(time(NULL));

	while (sum < 2772)
	{

		if (2772 - sum < 48)
	{
		sum -= password[--counter];
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
			password[counter++] = random;
			sum += random;
		}
		random = 0;
	}

	password[counter] = '\0';
	printf("%s\n", password);

	return 0;
}
