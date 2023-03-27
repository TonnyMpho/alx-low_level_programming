#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: integer pointer
 * @b: integer pointer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
