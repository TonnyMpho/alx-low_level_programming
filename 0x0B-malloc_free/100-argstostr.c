#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument counter
 * @av: argument value
 * Return: contatenated argument values
 */
char *argstostr(int ac, char **av)
{
	int a, b, i, j;
	char *str;
	int length = 0;

	if (ac == 0 || av === NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (av[a][b] != '\0')
				length++;
		}
	}

	str = malloc(sizeof(char) * length);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (av[i][j] != '\0')
				str[i] = av[i][j];
		}
		str[i] = '\n';
	}
	str[i] = '\0';

	return (str);
}
