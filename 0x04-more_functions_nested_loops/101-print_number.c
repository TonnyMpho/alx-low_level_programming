#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number to print
 * Return: Void (nothing)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');

}
