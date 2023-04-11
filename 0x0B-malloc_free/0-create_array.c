#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of memory to be allocated
 * @c: character to populate the array with
 * Return: char - pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;

	if (size == 0)
		return (NULL);

	char *char_array = malloc(sizeof(char) * size);

	if (char_array == NULL)
		return (NULL);

	while (i < size)
	{
		char_array[i] = c;
		i++;
	}
	return (char_array);
}
