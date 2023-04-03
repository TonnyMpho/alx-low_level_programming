
#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @src: pointer to the memory area
 * @dest: destination memory area
 * @n: number of bytes of the memory
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
