#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one
 * number to another.
 *
 * @n: number
 * @m: number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_dif = n ^ m;
	unsigned int num_bits = 0;

	while (bits_dif > 0)
	{
		num_bits += bits_dif & 1;
		bits_dif >>= 1;
	}

	return (num_bits);
}
