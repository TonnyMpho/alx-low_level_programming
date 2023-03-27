#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: pointer
 * Return: integer
 */
int _strlen(char *s)
{
	int str_length = 0;

	while (*s != '\0')
	{
		s++;
		str_length++;
	}
	return (str_length);
}
