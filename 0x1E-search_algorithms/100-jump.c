#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search
 *
 * Return: index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[(int)fmin(step, size) -1] < value)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}

	printf("Value found betweeen indexes [%ld] and [%ld]\n", prev - 1, prev);
	while (array[prev] < value)
	{
		prev += 1;
		if (prev == fmin(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
