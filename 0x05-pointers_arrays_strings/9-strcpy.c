#include "main.h"

/**
 * _strcpy - function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to
 *
 * @src: source string
 * @dst: destination string
 *
 * Return: Char
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a + 1] = '\0';
}
