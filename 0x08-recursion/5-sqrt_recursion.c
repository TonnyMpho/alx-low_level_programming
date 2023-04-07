#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to find the square root of.
 * Return: int, square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	int square = _sqrt_recursion(n / 4) * 2;
	int x = square + 1;

	if ((x * x) <= n)
	{
		return (x);
	}
	else
		return (square);

}
