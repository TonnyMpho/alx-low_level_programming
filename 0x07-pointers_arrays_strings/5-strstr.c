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
		j = 0;

		if (haystack[i] == needle[j])
		{
			p = &haystack[i];

			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				if (needle[j + 1] == '\0')
				{
					return (p);
				}
				i++;
				j++;
			}
		}
		if (*needle == 0)
			return (haystack);
	}
	return (NULL);
}
