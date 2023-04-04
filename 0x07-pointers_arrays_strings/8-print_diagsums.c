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
	int i;
	int sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
