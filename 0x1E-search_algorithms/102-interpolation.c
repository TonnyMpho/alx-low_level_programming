#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search
 *
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, pos;
	int high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
		
	}
	printf("Value checked array[%d] is out of range\n", array[pos + 1]);
	return (-1);
}
