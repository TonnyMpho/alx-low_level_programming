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

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	for (j = 0; j < size; j++)
	{
		sum2 += *(a + i * size + j);
	}

	printf("%d ", sum1);
	printf("%d\n", sum2);
}
