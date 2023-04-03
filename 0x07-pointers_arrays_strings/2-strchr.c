#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string
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
	char *p = s;

	while (p[i] != '\0')
	{
		if (p[i] == c)
		{
			//p = &s[i];
			return (&p[i]);
		}
		i++;
	}

	return (NULL);
}
