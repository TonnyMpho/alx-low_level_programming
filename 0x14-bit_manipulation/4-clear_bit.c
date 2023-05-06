#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of
 * a bit to 0 at a given index.
 * @n: pointer to a number
 * @index: is the index, starting from 0 of the bit
 * we want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}