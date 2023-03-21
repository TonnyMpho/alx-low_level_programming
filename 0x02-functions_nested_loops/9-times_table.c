#include "main.h"

/**
 * times_table - Function
 * A function that prints the 9 times table, starting with 0.
 * Return: Void
 */
void times_table(void)
{
	int a = 0, b, multi;

	while (a <= 9)
	{
		for (b = 0; b <= 9; b++)
		{
			multi = a * b;

			if (multi > 9)
				_putchar((multi / 10) + '0');

			_putchar((multi % 10) + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
