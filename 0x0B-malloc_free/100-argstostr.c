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
	int a, b, c, i, j;
	char *str;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			length++;
		length++;
	}

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		c = 0;
		for (j = 0; av[i][j]; j++, c++)
			str[c] = av[i][j];
		str[c] = '\n';
		c++;
	}
	str[c] = '\0';

	return (str);
}
