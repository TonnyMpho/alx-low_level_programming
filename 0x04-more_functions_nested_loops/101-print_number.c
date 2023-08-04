#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number to print
 * Return: Void (nothing)
 */
void print_number(int n)
{
	int tmp = n, div = 1;

	if (n < 0)
	{
		_putchar("-");
		n = -n;
	}


	while (tmp > 9)
	{
		tmp /= 10;
		div *= 10;
	}

	while (div != 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
}
