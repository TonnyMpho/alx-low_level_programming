#include "main.h"
#include <stddef.h>


/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to astring to search from
 * @needle: string to search
 * Return: Returns a pointer to the beginning of
 * the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == *needle)
			{
				p = &haystack[i];
				return p;
			}
		}
	}
	return NULL;
}
