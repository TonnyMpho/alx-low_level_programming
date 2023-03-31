#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
