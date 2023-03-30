#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: integer, size
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0;

	while (src[size] != '\0' && size < n)
	{
		dest[size] = src[size];
		size++;
	}
	for (; size < n; size++)
		dest[size] = '\0';

	return (dest);
}
