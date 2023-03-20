#include "main.h"

/**
 * print_sign - Entry point of fuction
 * @n: The number to be checked
 * A function that prints the sign of a number.
 * Return: Always 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
