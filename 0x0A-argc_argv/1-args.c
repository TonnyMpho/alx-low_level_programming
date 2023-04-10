#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts the number of arguments, int.
 * @argv: string, holds arguments
 *
 * Return: Always 0 Success.
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
