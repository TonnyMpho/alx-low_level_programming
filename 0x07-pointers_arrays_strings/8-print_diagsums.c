#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: 2D array
 * @size: size of array - number of rows and columns
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	for (i = 0, j = size - 1; i < size * size; i += size + 1, j += size - 1)
	{
		sum1 += a[i];
		sum2 += a[j];
	}

	printf("%d, %d\n", sum1, sum2);
}
