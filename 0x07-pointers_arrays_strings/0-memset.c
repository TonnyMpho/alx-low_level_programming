#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: bytes
 * @n: number of bytes of the memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
