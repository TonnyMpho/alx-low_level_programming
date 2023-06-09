#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function
 * Return: Void - Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
