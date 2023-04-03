#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character
 * in a string
 * @s: string to search from
 * @c: character to check for
 *
 * Return: Returns a pointer to the first occurrence
 * of the character c in the string s, or
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}

	return NULL;
}
