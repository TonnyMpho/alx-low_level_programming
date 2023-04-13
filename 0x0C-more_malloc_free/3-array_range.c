#include "main.h"
#include <stdio.h>

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

	int_array = malloc(sizeof(int) * (max - min));
	if (int_array == NULL)
		return (NULL);

	i = min;
	while (i <= max)
	{
		int[i - min] = i;
		i++;
	}
	return (int_array);
}
