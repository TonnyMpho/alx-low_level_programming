#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int *int_array;
	int i;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * (max - min + 1));
	if (int_array == NULL)
		return (NULL);

	i = min;
	while (i <= max)
	{
		int_array[i - min] = i;
		i++;
	}
	return (int_array);
}
