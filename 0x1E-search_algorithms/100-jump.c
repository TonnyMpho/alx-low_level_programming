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
	size_t i, prev = 0;

	if (array == NULL)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	printf("Value found betweeen indexes [%ld] and [%ld]\n", prev - step, prev);

	for (i = prev - step; i < size && i < prev; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
