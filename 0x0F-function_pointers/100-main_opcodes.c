#include <stdio.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument values
 * Return: Nothing - Void
 */
int main(int argc, char *argv[])
{
	char *ptr = main;
	int i = 0, n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	while (i < n_bytes)
	{
		printf("%02x ", ptr[i]);
		i++;
	}
	printf("\n");

	return (0);
}
