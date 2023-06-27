#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: (0) Success
 */
int main(void)
{
	char *password, *keys;
	int i = 0;

	keys = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
	srand(time(NULL));

	while (i < 6)
	{
		password[i] = keys[rand() % 64];
		i++;
	}

	password[6] = '0';
	printf("%s\n", password);

	return (0);
}
