#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * This function appends the src string to the dest
 * string, overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating
 * null byte
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d_size = 0, s_size = 0;

	while (dest[d_size] != '\0')
		d_size++;

	while (src[s_size] != '\0')
	{
		dest[d_size] = src[s_size];

		d_size++;
		s_size++;
	}

	dest[d_size] = '\0';
	return dest;
}
