#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: The array to be printed
 * @n: number of elements
 *
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they are stored in the array
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");

		i++;
	}
	printf("\n");
}
