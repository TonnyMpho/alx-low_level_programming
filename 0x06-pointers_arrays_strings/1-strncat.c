#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @n: integer
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_size = 0, s_size = 0;

	while (dest[d_size] != '\0')
		d_size++;

	while (src[s_size] != '\0' && s_size < n)
	{
		dest[d_size] = src[s_size];

		d_size++;
		s_size++;
	}

	dest[d_size] = '\0';
	return dest;
}
