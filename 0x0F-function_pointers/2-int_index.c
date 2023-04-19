#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of numbers
 * @size: size of the array
 * @cmp: pointer to function/ callback function
 *
 * Return: integer -  index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
			i++;
		}
	}
	return (-1);
}
