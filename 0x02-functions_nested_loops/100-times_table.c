#include "main.h"

/**
 * print_times_table -Function
 * A function that prints the n times table, starting with 0.
 * @n: variable to print the multiples of
 * Return: Void
 */
void print_times_table(int n)
{
	int a, b, multi;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				multi = a * b;

				_putchar(',');
				_putchar(' ');

				if (multi <= 99)
					_putchar(' ');
				
				if (multi <= 9)
					_putchar(' ');

				if (multi >= 100)
				{
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
				}
				else if (multi <= 99 && multi >= 10)
				{
					_putchar((multi / 10) + '0');
				}
				_putchar((multi % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
