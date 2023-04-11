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
	
	if (argc == 1)
	{
		printf("0\n");
	} else
	{
		int i;
		for (i = 1; i < argc; i++)
		{
			int j = i;
			
			while (argv[j] != '\0')
			{
				if (argv[j] < '0' || argv[j] > '9')
				{
					printf("Error\n");
					return 1;
				}
				num++;
			}
			
			int value = atoi(argv[i]);
			
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
