#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int comp;
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;

	comp = s1[i] - s2[i];
	return (comp);
}
