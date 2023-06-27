#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: (0) Success
 */
int main(void)
{
	char password[7], *keys;
	int i = 0;

	keys = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
	srand(time(NULL));

	while (i < 7)
	{
		password[i] = keys[rand() % 64];
		i++;
	}

	printf("%s\n", password);

	return (0);
}
