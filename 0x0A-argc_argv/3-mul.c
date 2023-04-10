#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts the number of arguments, int.
 * @argv: string, holds arguments
 *
 * Return: Always 0 Success.
 */
int main(int argc, char **argv)
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
}
