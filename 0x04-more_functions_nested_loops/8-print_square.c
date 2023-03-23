#include "main.h"

/**
 * print_square - function that prints
 * a square, followed by a new line
 * @size: is the size of the square
 * Return: Void
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; a < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
