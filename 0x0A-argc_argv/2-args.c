#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts the number of arguments, int.
 * @argv: string, holds arguments
 *
 * Return: Always 0 Success.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
