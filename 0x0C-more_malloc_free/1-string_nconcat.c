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
	unsigned int s1_length, s2_length;
	unsigned int i, j;
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_length = 0;
	while (s1[s1_length] != '\0')
		s1_length++;

	s2_length = 0;
	while (s2[s2_length] != '\0')
		s2_length++;

	if (n >= s2_length)
		n = s2_length;

	str = malloc(sizeof(*str) * (s1_length + n + 1));

	if (str == NULL)
		return (NULL);

	while (i < s1_length)
	{
		str[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		str[s1_length + j] = s2[j];
		j++;
	}

	str[s1_length + n] = '\0';

	return (str);
}
