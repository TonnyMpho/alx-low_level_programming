#include "main.h"

/**
 * reverse_array - A function that
 * reverses the content of an array of integers
 *
 * @a: integer array
 * @n: number of array elements
 * Return: Reversed array
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;

		i++;
	}
}
