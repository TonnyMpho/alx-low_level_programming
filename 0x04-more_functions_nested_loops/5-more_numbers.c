#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: Void
 */
void more_numbers(void)
{
	int i, numbers;

	for (i = 0; i < 10; i++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
				_putchar((numbers / 10) + '0');

			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
