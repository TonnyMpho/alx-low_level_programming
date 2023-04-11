#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts the number of arguments, int.
 * @argv: string, holds arguments
 *
 * Return: Always 0 Success.
 */
int main(int argc, char *argv[]) {

	int result = 0;
	int i, value;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *num = argv[i];
			int j = 0;

			while (num[j] != '\0')
			{
				if (num[j] < '0' || num[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			value = atoi(argv[i]);

			if (value < 0)
			{
				printf("Error\n");
				return (1);
			}
			result += value;
		}
		printf("%d\n", result);
	}
	return (0);
}
