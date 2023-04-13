#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: String
 * @s2: String
 * @n: number of bytes
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1len, s2len;
	unsigned int i, j;
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1len = 0;
	while (s1[s1len] != '\0')
		s1len++;

	s2len = 0;
	while (s2[s2len] != '\0')
		s2len++;

	if (n >= s2len)
		n = s2len;

	str = malloc(sizeof *str * (s1len + n + 1));

	if (str == NULL)
		return (NULL);

	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		str[s1len + j] = s2[j];
		j++;
	}

	str[s1len + n] = '\0';

	return (str);
}
